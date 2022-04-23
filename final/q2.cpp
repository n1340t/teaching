#include <iostream>
#include <iomanip>
using namespace std;

void decToBinary(int n)
{
    int binaryNum[5] = {0, 0 ,0 ,0, 0};
    int N = n;
    int i = 3;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i--;
    }
    cout << left << setw(8) << N;
    for (int j = 0; j < 4; j++ ) {
      cout << setw(3) << binaryNum[j];
    }
    cout << endl;
}

int main() {
  int N = 15;
  cout << left << setw(8) << "Decimal" << setw(3) << "D3" << setw(3) << "D2" << setw(3) << "D1" << setw(3) << "D0" << endl;
  for(int i = 0; i <= N; i++) {
    decToBinary(i);
  }
}