#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Please enter lengths of a triangle: ";
  cin >> a >> b >> c;
  if (a <= 0 || b <= 0 || c <= 0)
  {
    cout << "The values must be positive or greater than 0";
    return 0;
  }
  int hypotenuse = fmax(fmax(a, b), c);
  int two_sides_square;
  if (hypotenuse == a)
  {
    two_sides_square = b * b + c * c;
  }
  else if (hypotenuse == b)
  {
    two_sides_square = a * a + c * c;
  }
  else
  {
    two_sides_square = a * a + b * b;
  }
  cout << "The triangle with lengths " << a << " " << b << " " << c << " is "
       << (hypotenuse * hypotenuse == two_sides_square
               ? ""
               : "not")
       << " a right-side triangle";
  return 0;
}