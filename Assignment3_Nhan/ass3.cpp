#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int N = 8;
void importData(string fileName, string fName[], string lName[], float g1[], float g2[], float g3[]); // q1;
void DisplayData(string fName[], string lName[], float g1[], float g2[], float g3[]);                 // q2
void finalGrade(string fName[], string lName[], float g1[], float g2[], float g3[], float GTotal[]);                  // q3
void adjustFinalGrade(string fName[], string lName[], float g1[], float g2[], float g3[]); // q4
void report(string fName[], string lName[], float g1[], float g2[], float g3[], float GTotal[]);

int main()
{
  string fileName = "input.txt";
  string fName[N], lName[N];
  float g1[N], g2[N], g3[N], GTotal[N], GATotal[N];
  importData(fileName, fName, lName, g1, g2, g3);
  finalGrade(fName, lName, g1, g2, g3, GTotal);
  report(fName, lName, g1, g2, g3, GTotal);
  return 0;
}

void importData(string fileName, string fName[], string lName[], float g1[], float g2[], float g3[])
{
  // Open a file
  int pos = 0;
  ifstream input(fileName);
  while (!input.eof())
  {
    if (pos % 5 == 0)
    {
      input >> fName[pos / 5];
      input >> lName[++pos / 5];
    }
    else
    {
      input >> g1[++pos / 5];
      input >> g2[++pos / 5];
      input >> g3[++pos / 5];
      pos++;
    }
  }
  input.close();
}

void DisplayData(string fName[], string lName[], float g1[], float g2[], float g3[])
{
  string header[5] = {"Name", "Surname", "G1", "G2", "G3"};
  int width_size = 63;
  for (int i = 0; i < width_size; i++)
  {
    cout << "=";
  }
  cout << endl;
  int dynamicWidth = 0;
  for (int i = 0; i < 5; i++)
  {
    dynamicWidth = header[i].size() + 5;
    cout << left << setw(4) << "|" << setw(dynamicWidth) << header[i];
    if (i == 4)
    {
      cout << "|" << endl;
    }
  }
  for (int i = 0; i < width_size; i++)
  {
    cout << "=";
    if (i == width_size - 1)
    {
      cout << endl;
    }
  }
  for (int i = 0; i < N; i++)
  {
    cout << left << setw(2) << "|" << setw(header[1].size() + 4) << fName[i];
    cout << left << setw(2) << "|" << setw(header[1].size() + 7) << lName[i];
    cout << left << setw(2) << "|" << setw(header[1].size() + 2) << g1[i];
    cout << left << setw(2) << "|" << setw(header[1].size() + 2) << g2[i];
    cout << left << setw(2) << "|" << setw(header[1].size() + 2) << g3[i];
    cout << "|" << endl;
  }
  for (int i = 0; i < width_size; i++)
  {
    cout << "=";
    if (i == width_size - 1)
    {
      cout << endl;
    }
  }
}

void finalGrade(string fName[], string lName[], float g1[], float g2[], float g3[], float GTotal[])
{
  string header[3] = {"Name", "Surname", "Final Grade"};
  int width_size = 50;
  for (int i = 0; i < width_size; i++)
  {
    cout << "=";
  }
  cout << endl;
  int dynamicWidth = 0;
  for (int i = 0; i < 3; i++)
  {
    dynamicWidth = header[i].size() + 5;
    cout << left << setw(4) << "|" << setw(dynamicWidth) << header[i];
    if (i == 2)
    {
      cout << "|" << endl;
    }
  }
  for (int i = 0; i < width_size; i++)
  {
    cout << "=";
    if (i == width_size - 1)
    {
      cout << endl;
    }
  }
  for (int i = 0; i < N; i++)
  {
    GTotal[i] = g1[i] + g2[i] + g3[i];
    cout << left << setw(2) << "|" << setw(header[1].size() + 4) << fName[i];
    cout << left << setw(2) << "|" << setw(header[1].size() + 7) << lName[i];
    cout << left << setw(9) << "|" << setw(header[1].size() + 4) << fixed << setprecision(1) << (g1[i] + g2[i] + g3[i]) / 3;
    cout << "|" << endl;
  }
  for (int i = 0; i < width_size; i++)
  {
    cout << "=";
    if (i == width_size - 1)
    {
      cout << endl;
    }
  }
}

void adjustFinalGrade(string fName[], string lName[], float g1[], float g2[], float g3[])
{
  string header[3] = {"Name", "Surname", "Adjusted Grade"};
  int width_size = 53;
  for (int i = 0; i < width_size; i++)
  {
    cout << "=";
  }
  cout << endl;
  int dynamicWidth = 0;
  for (int i = 0; i < 3; i++)
  {
    dynamicWidth = header[i].size() + 5;
    cout << left << setw(4) << "|" << setw(dynamicWidth) << header[i];
    if (i == 2)
    {
      cout << "|" << endl;
    }
  }
  for (int i = 0; i < width_size; i++)
  {
    cout << "=";
    if (i == width_size - 1)
    {
      cout << endl;
    }
  }
  for (int i = 0; i < N; i++)
  {
    cout << left << setw(2) << "|" << setw(header[1].size() + 4) << fName[i];
    cout << left << setw(2) << "|" << setw(header[1].size() + 7) << lName[i];
    cout << left << setw(11) << "|" << setw(header[1].size() + 5) << fixed << setprecision(1) << g1[i] * 0.3 + g2[i] * 0.3 + g3[i] * 0.4;
    cout << "|" << endl;
  }
  for (int i = 0; i < width_size; i++)
  {
    cout << "=";
    if (i == width_size - 1)
    {
      cout << endl;
    }
  }
}

void report(string fName[], string lName[], float g1[], float g2[], float g3[], float GTotal[])
{
  float classAvg = 0;
  for(int i = 0; i < N; i++) {
    classAvg += GTotal[i];
  }
  cout << "Class Average is " << fixed << setprecision(1) << classAvg / N;
}