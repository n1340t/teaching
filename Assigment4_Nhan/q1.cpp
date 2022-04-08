#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <fstream>

using namespace std;

inline void printHorizontalBorder(int n = 35)
{
  for (int i = 0; i < n; i++)
  {
    cout << "=";
  }
  cout << endl;
}
inline void emptyRow()
{
  cout << "|" << right << setw(34) << "|" << endl;
}
void printMenu()
{
  int N = 10;
  string menu[5] = {"Load Data", "Display Data", "Display Final Grades", "Sort Data", "Exit"};
  printHorizontalBorder();
  cout << left << setw(N) << "|"
       << "Academic System" << right << setw(N) << "|" << endl;
  printHorizontalBorder();
  emptyRow();
  string temp = "";
  for (int i = 0; i < 5; i++)
  {
    temp = to_string(i + 1) + ". " + menu[i];
    cout << left << setw(N / 3) << "|" << setw(31) << temp << "|" << endl;
  }
  emptyRow();
  printHorizontalBorder();
}

void importData(string fileName, string fName[], string lName[], float g1[], float g2[], float g3[], int &total_stu)
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
      total_stu++;
    }
  }
  input.close();
}

void DisplayData(string fName[], string lName[], float g1[], float g2[], float g3[], int total_stu)
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
  for (int i = 0; i < total_stu; i++)
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

void finalGrade(string fName[], string lName[], float g1[], float g2[], float g3[], float GTotal[], int total_stu)
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
  for (int i = 0; i < total_stu; i++)
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
void sortData(string mainArr[], string secondArr[], float g1[], float g2[], float g3[], int total_stu) {
  for(int i = 0; i < total_stu; i++) {
    string currentMin = mainArr[i];
    string second = secondArr[i];

    float g1val = g1[i];
    float g2val = g2[i];
    float g3val = g3[i];

    int currentMinIndex = i;
    for(int j = i+1; j < total_stu; j++) {
      if (currentMin > mainArr[j]) {
        currentMin = mainArr[j];
        second = secondArr[j];
        g1val = g1[j];
        g2val = g2[j];
        g3val = g3[j];

        currentMinIndex = j;
      }
    }
    if (currentMinIndex != i) {
      mainArr[currentMinIndex] = mainArr[i];
      mainArr[i] = currentMin;

      secondArr[currentMinIndex] = secondArr[i];
      secondArr[i] = second;

      g1[currentMinIndex] = g1[i];
      g1[i] = g1val;
      
      g2[currentMinIndex] = g2[i];
      g2[i] = g2val;

      g3[currentMinIndex] = g3[i];
      g3[i] = g3val;
    }
  }
}
int main()
{
  const int N = 35;
  char sort;
  string fileName = "input.txt";
  string fName[N], lName[N];
  float g1[N], g2[N], g3[N], GTotal[N];
  int total_stu = 0;
  string option;
  system("CLS");
  system("clear");
  do
  {
    printMenu();
    cout << "Select one option: ";
    cin >> option;
    if (option.size() > 1)
    {
      cout << "In valid entry. Please try again" << endl;
      continue;
    }
    switch (option[0])
    {
    case '1':
      cout << "Load Data ..." << endl;
      importData(fileName, fName, lName, g1, g2, g3, total_stu);
      cout << "Total Student " << total_stu << endl;
      break;
    case '2':
      cout << "Display Data ..." << endl;
      DisplayData(fName, lName, g1, g2, g3, total_stu);
      break;
    case '3':
      cout << "Display Final Grade ..." << endl;
      finalGrade(fName, lName, g1, g2, g3, GTotal, total_stu);
      break;
    case '4':
      cout << "Sort Data ..." << endl;
      cout << "Sorting by [N]ame or [S]urname. Please enter N or S...";
      cin >> sort;
      cout << "Before: " << endl;
      DisplayData(fName, lName, g1, g2, g3, total_stu);
      cout << "After: " << endl;
      if (sort == 'N') {
        sortData(fName, lName, g1, g2, g3, total_stu);
      } else {
        sortData(lName, fName, g1, g2, g3, total_stu);
      }
      cout << "Runnning" << endl;
      DisplayData(fName, lName, g1, g2, g3, total_stu);
      break;
    case '5':
      continue;
    default:
      cout << "In valid entry. Please try again" << endl;
    }
    cout << "Press a key to continue...";
    getchar();
    getchar();
  } while (option[0] != '5');
  return 0;
}