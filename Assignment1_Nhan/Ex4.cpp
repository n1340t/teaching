#include <iostream>
using namespace std;

int main()
{
  int numerator, denominator;
  cout << "Enter a numerator: ";
  cin >> numerator;
  cout << "Enter a denominator: ";
  cin >> denominator;
  if (denominator == 0) {
    cout << "Denominator must not equal to 0";
    return 0;
  }
  int reminder = numerator % denominator;
  int quotient = numerator / denominator;
  if (reminder == 0)
  {
    cout << numerator << " / " << denominator << " is an improper fraction and it can be reduced to " << quotient;
  }
  else if (numerator < denominator)
  {
    cout << numerator << " / " << denominator << " is a proper fraction";
  }
  else if (numerator > denominator)
  {
    cout << numerator << " / " << denominator << " is an improper fraction and its mixed fraction is " << quotient << " + " << reminder << " / " << denominator;
  }
}