#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double radius;
  cout << "Enter radius of sphere: ";
  cin >> radius;
  double vol = (4.0 / 3) * pow(radius, 3) * M_PI;
  cout << fixed << setprecision(2) << "The volume of sphere is " << vol;
}