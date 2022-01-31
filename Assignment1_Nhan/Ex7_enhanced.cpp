#include <iostream>
using namespace std;

int main() {
    int a,b,c, temp;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    // b is max
    if (b > a && b > c)
    {
      temp = b;
      b = a;
      a = temp;
    }
    // c is max
    if (c > a && c > b)
    {
      temp = a;
      a = c;
      c = temp;
    }
    if (b < c)
    {
      temp = c;
      c = b;
      b = temp;
    }
    cout << "Sorted in descending order: " << a << " " << b << " " << c << " " << endl;
    return 0;
}