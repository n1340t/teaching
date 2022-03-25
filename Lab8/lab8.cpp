#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
const int MAX_SIZE = 10;
void initialize(int array[][MAX_SIZE], int rowSize, int colSize);                          // Q1
void display(int array[][MAX_SIZE], int rowSize, int colSize);                             // Q2
int sumEven(int array[][MAX_SIZE], int rowSize, int colSize);                              // Q3
int sum2Diagonal(int array[][MAX_SIZE], int rowSize, int colSize);                         // Q4
int sumColumn(int array[][MAX_SIZE], int rowSize, int colIndex);                           // Q5
int largestSum(int array[][MAX_SIZE], int rowSize, int colSize);                           // Q6
void transpose(int array[][MAX_SIZE], int newArray[][MAX_SIZE], int rowSize, int colSize); // Q7

int main()
{
  srand(time(0));
  const int ROW_SIZE = 10;
  const int COLUMN_SIZE = 10;
  int myMatrix[ROW_SIZE][COLUMN_SIZE];
  initialize(myMatrix, ROW_SIZE, COLUMN_SIZE);
  cout << "Q2" << endl;
  display(myMatrix, ROW_SIZE, COLUMN_SIZE);
  cout << "Q3" << endl;
  cout << "Sum of Even " << sumEven(myMatrix, ROW_SIZE, COLUMN_SIZE) << endl;
  cout << "Q4" << endl;
  cout << "Sum of Diagonal " << sum2Diagonal(myMatrix, ROW_SIZE, COLUMN_SIZE) << endl;
  cout << "Q5" << endl;
  cout << "Sum of last column " << sumColumn(myMatrix, ROW_SIZE, COLUMN_SIZE - 1) << endl;
  cout << "Q6" << endl;
  cout << "Column has largest sum " << largestSum(myMatrix, ROW_SIZE, COLUMN_SIZE) << endl;
  cout << "Q7" << endl;
  int transposedMatrix[ROW_SIZE][COLUMN_SIZE];
  cout << "Original 2D Array" << endl;
  display(myMatrix, ROW_SIZE, COLUMN_SIZE);
  transpose(myMatrix, transposedMatrix, ROW_SIZE, COLUMN_SIZE);
  cout << "Transposed Array" << endl;
  display(transposedMatrix, ROW_SIZE, COLUMN_SIZE);
}

void initialize(int array[][MAX_SIZE], int rowSize, int colSize)
{
  for (int i = 0; i < rowSize; i++)
  {
    for (int j = 0; j < colSize; j++)
    {
      array[i][j] = rand() % 100;
    }
  }
}

void display(int array[][MAX_SIZE], int rowSize, int colSize)
{
  for (int j = 0; j < colSize; j++)
  {
    cout << right << setw(3) << j;
  }
  cout << endl;
  for (int i = 0; i < rowSize; i++)
  {
    cout << i << " ";
    for (int j = 0; j < colSize; j++)
    {
      cout << left << setw(3) << array[i][j];
    }
    cout << endl;
  }
}

int sumEven(int array[][MAX_SIZE], int rowSize, int colSize)
{
  int sum = 0;
  for (int i = 0; i < rowSize; i++)
  {
    for (int j = 0; j < colSize; j++)
    {
      if (array[i][j] % 2 == 0)
      {
        sum += array[i][j];
      }
    }
  }
  return sum;
}

int sum2Diagonal(int array[][MAX_SIZE], int rowSize, int colSize)
{
  int sum = 0;
  for (int i = 0; i < colSize; i++)
  {
    for (int j = 0; j < colSize; j++)
    {
      if (i + j == rowSize)
      {
        sum += array[i][j];
        break;
      }
    }
  }
  return sum;
}

int sumColumn(int array[][MAX_SIZE], int rowSize, int colIndex)
{
  int sum = 0;
  for (int i = 0; i < rowSize; i++)
  {
    sum += array[i][colIndex];
  }
  return sum;
}

int largestSum(int array[][MAX_SIZE], int rowSize, int colSize)
{
  int maxRow = 0;
  int indexOfMaxRow;
  for (int i = 0; i < rowSize; i++)
  {
    int curSum = 0;
    for (int j = 0; j < colSize; j++)
    {
      curSum += array[i][j];
    }
    if (curSum >= maxRow)
    {
      maxRow = curSum;
      indexOfMaxRow = i;
    }
  }
  return indexOfMaxRow;
}

void transpose(int array[][MAX_SIZE], int newArray[][MAX_SIZE], int rowSize, int colSize)
{
  for (int i = 0; i < rowSize; i++)
  {
    for (int j = 0; j < colSize; j++)
    {
      newArray[i][j] = array[j][i];
    }
  }
}