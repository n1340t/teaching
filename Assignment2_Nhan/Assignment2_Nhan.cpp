#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

unsigned long long int factorial(int num); // question 1
long double maclaurinSin(double x, int N); // question 2 x is in radian, N is number of iteration
void test(double data[], int dataSize, int terms[], int termsSize); // question 3,4
long double enhancedMaclaurinSin(double x, int N); // question 6
int main()
{
  double testData[3] = {M_PI / 3, M_PI_4, M_PI / 6};
  int terms[4] = {3, 6, 9, 12};
  cout << "Question 3 test" << endl;
  cout << fixed << setprecision(20);
  test(testData, 3, terms, 4);
  cout << endl;
  cout << "Question 4 test" << endl;
  int q4Terms[6] = {7, 8, 9, 10, 11, 12};
  test(testData, 3, q4Terms, 6);
  cout << endl;
}

unsigned long long int factorial(int num)
{
  unsigned long long int factorial = 1;
  for (int i = 1; i <= num; i++)
  {
    factorial *= i;
  }
  return factorial;
}

long double maclaurinSin(double x, int N)
{
  long double res = 0;
  for (int i = 0; i < N; i++)
  {
    res += pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
  }
  return res;
}
long double enhancedMaclaurinSin(double x, int N)
{
  long double res = 0;
  for (int i = 0; i < N; i++)
  {
    res += pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
    if (i > 8 && abs(sin(x) - res) <= 0.00000000000000001)
    {
      break;
    }
  }
  return res;
}

void test(double data[], int dataSize, int terms[], int termsSize)
{
  for (int i = 0; i < dataSize; i++)
  {
    cout << "x value is " << data[i] << endl;
    for (int j = 0; j < termsSize; j++)
    {
      cout << "Number of term is " << terms[j] << endl;
      cout << "Maclaurin sin is " << maclaurinSin(data[i], terms[j]) << endl;
      cout << left << setw(17) << "Actual sin is " << sin(data[i]) << endl;
    }
    cout << "-------" << endl;
  }
}