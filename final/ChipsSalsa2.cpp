#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int N = 5;
  string salsa[5] = {"mild", "medium", "sweet", "hot", "zesty"};
  int sales_month1[N];
  int sales_month2[N];
  for(int i = 0; i < N; i++) {
    cout << "Enter sales of salsa: " << salsa[i] << endl;
    cout << "Month 1: ";
    cin >> sales_month1[i];
    if (sales_month1[i] < 0) {
      cout << "Invalid input, exit program";
      return 0;
    }
    cout << "Month 2: ";
    cin >> sales_month2[i];
    if (sales_month2[i] < 0) {
      cout << "Invalid input, exit program";
      return 0;
    }
  }
  // print header
  cout << left << setw(15) << "" << setw(10) << "Month 1" << setw(10) << "Month 2" << setw(10) << "Total salsa" << endl;
  int total_salsa = 0;
  int best_selling = 0;
  int best_selling_index = 0;
  int total_month1 = 0;
  int total_month2 = 0;
  for(int i = 0; i < N; i++) {
    total_salsa = sales_month1[i] + sales_month2[i];
    if (total_salsa >= best_selling) {
      best_selling = total_salsa;
      best_selling_index = i;
    }
    total_month1 += sales_month1[i];
    total_month2 += sales_month2[i];
    cout << left << setw(15) << salsa[i] << setw(10) << sales_month1[i] << setw(10) << sales_month2[i] << setw(10) << total_salsa << endl;
  }
  // print total per month
  cout << left << setw(15) << "Total month" << setw(10) << total_month1 << setw(10) << total_month2 << endl;
  cout << "Best selling salsa is " << salsa[best_selling_index] << " with total sales of " <<  best_selling << endl;
}