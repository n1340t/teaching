#include <iostream>
using namespace std;

int main()
{
  double first_real, first_img, second_real, second_img;
  cout << "Enter first complex number (real number followed imaginary number): ";
  cin >> first_real >> first_img;
  cout << "Enter first complex number (real number followed imaginary number): ";
  cin >> second_real >> second_img;
  double product_real = first_real * second_real - first_img * second_img;
  double product_img = first_real * second_img + second_real * first_img;
  cout << "The product of ";
  cout << first_real << " + " << first_img << "i";
  cout << " and ";
  cout << second_real << " + " << second_img << "i";
  cout << " is ";
  cout << product_real << " + " << product_img << "i";
}