#include <iostream>
using namespace std;

int main()
{
  int num1, num2;
  double result;
  char op;
  cout << "Enter two integers: ";
  cin >> num1 >> num2;
  cout << "Enter an arithmetic operator (+, -, *, /): ";
  cin >> op;
  switch (op)
  {
  case ('+'):
    result = num1 + num2;
    break;
  case ('-'):
    result = num1 - num2;
    break;
  case ('*'):
    result = num1 * num2;
    break;
  case ('/'):
    if (num2 == 0)
    {
      cout << "Cannot divide by 0" << endl;
      return 0;
    }
    result = (1.0 * num1) / num2;
  default:
    cout << "Invalid operator" << endl;
    return 0;
  }
  cout << "Result = " << num1 << " " << op << " " << num2 << " = " << result << endl;
  return 0;
}