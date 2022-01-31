#include <iostream>
using namespace std;

int main()
{
  int a, b, c, temp;
  cout << "Enter three integers: ";
  cin >> a >> b >> c;
  // a is max
  if (a > b && a > c)
  {
    // b is min
    if (b < c)
    {
      temp = b;
      b = c;
      c = temp;
    }
  }
  // b is max
  if (b > a && b > c)
  {
    // swap a,b
    temp = b;
    b = a;
    a = temp;
    // a is min
    if (b < c)
    {
      temp = c;
      c = b;
      b = temp;
    }
  }
  // c is max
  if (c > a && c > b)
  {
    temp = a;
    a = c;
    c = temp;
    // b is min
    if (b < c)
    {
      temp = c;
      c = b;
      b = temp;
    }
  }
  cout << "Sorted in descending order: " << a << " " << b << " " << c << " " << endl;
  return 0;
}