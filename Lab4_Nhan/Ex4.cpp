#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  string city1, city2, city3, temp;
  cout << "Enter the first city: ";
  cin >> city1;
  cout << "Enter the second city: ";
  cin >> city2;
  cout << "Enter the third city: ";
  cin >> city3;
  // city3 is min
  if (city3 < city2 && city3 < city1) {
    temp = city3;
    city3 = city1;
    city1 = temp;
  }
  // city 2 is min
  if (city2 < city1 && city2 < city3) {
    temp = city2;
    city2 = city1;
    city1 = temp;
  }
  if (city3 < city2) {
    temp = city3;
    city3 = city2;
    city2 = temp;
  }
  cout << "The three cities in alphabetical order are: ";
  cout << city1 << ", ";
  cout << city2 << ", ";
  cout << city3;
  return 0;
}