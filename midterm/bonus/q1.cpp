#include <iostream>
using namespace std;

int main()
{
  long x;
  int list[10];
  cout << "Enter x: ";
  cin >> x;
  int rightMost;
  int rest = x;
  int index = 0;
  do
  {
    rightMost = rest % 10;
    list[index++] = rightMost;
    rest /= 10;
  } while (rest > 0 && index < 10);
  cout << "Q1" << endl;
  cout << "Original value: " << x << endl;
  cout << "Value in array: ";
  for(int i = index - 1; i >= 0; i--) {
    cout << list[i];
  }
  cout << endl;
  long k = 0;
  for(int i = 0; i < index; i++) {
    k = 10 * k + list[i];
  }
  cout << "Q2" << endl;
  cout << "Original value: " << x << endl;
  cout << "New value: " << k;
  return 0;
}