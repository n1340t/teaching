#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double f_temp, m_speed;
  cout << "Enter the temperature in Fahrenheit (must be between -58°F and 41°F): ";
  cin >> f_temp;
  cout << "Enter the wind speed miles per hour (must be greater than or equal to 2): ";
  cin >> m_speed;
  bool is_temp_valid = f_temp >= -58 && f_temp <= 41;
  bool is_speed_valid = m_speed >= 2;
  if (is_temp_valid && is_speed_valid) {
    double chill_index = 35.74 + 0.6215 * f_temp  - 35.75 * pow(m_speed, 0.16) + 0.4275 * f_temp * pow(m_speed, 0.16);
    cout << "The wind chill index is " << chill_index;
  } else if (!is_temp_valid) {
    cout << "The temperature in Fahrenheit must be between -58°F and 41°F";
  } else if (!is_speed_valid) {
    cout << "The wind speed miles per hour must be greater than or equal to 2";
  }
  return 0;
}