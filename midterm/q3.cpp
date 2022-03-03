#include <iostream>
using namespace std;

bool morePositive(int list[], int listSize);
int main() {
  int testData[10] = {1, 0, -1, 1, -1, -1, 2, 1, -1, -1};
  bool isMorePositive = morePositive(testData, 10);
  if (isMorePositive) {
    cout << "There are more positive than negative";
  } else {
    cout << "There are not more positive than negative";
  }
}

bool morePositive(int list[], int listSize) {
  int positive = 0;
  int negative = 0;
  for(int i = 0; i < listSize; i++) {
    if (list[i] > 0) {
      positive += 1;
    } else {
      negative += 1;
    }
  }
  return positive > negative;
}