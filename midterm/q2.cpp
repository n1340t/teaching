#include <iostream>
using namespace std;

int main()
{
  string salsa_name[5] = {"mild", "medium", "sweet", "hot", "zesty"};
  int salsa_sales[5];
  int highest = 0, lowest = 0, total = 0;
  for(int i = 0; i < 5; i++) {
    cout << "Enter jar sales of " << salsa_name[i] << ": ";
    cin >> salsa_sales[i];
    if (salsa_sales[i] < 0) {
      cout << "Invalid input, jar sales must be greater or equal 0" << endl;
      break;
    }
    total += salsa_sales[i];
    if (salsa_sales[i] >= highest) {
      highest = salsa_sales[i];
    };
    if (i == 0) {
      lowest = salsa_sales[i];
    }
    if (salsa_sales[i] <= lowest) {
      lowest = salsa_sales[i];
    }
  }
  cout << "Total sales: " << total << endl;
  cout << "Heighest sale: " << highest << endl;
  cout << "Lowest sale: " << lowest << endl;
}