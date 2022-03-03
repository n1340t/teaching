#include <iostream>
using namespace std;

// Write the prototypes for the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength(double length);
double getWidth(double width);
double getArea(double legnth, double width);
void displayData(double length, double width, double area);
int main()
{
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area

   // Get the rectangle's length.
   length = getLength(length);

   // Get the rectangle's width.
   width = getWidth(width);

   // Get the rectangle's area.
   area = getArea(length, width);

   // Display the rectangle's data.
   displayData(length, width, area);

   return 0;
}

//***************************************************
// You must write the getLength, getWidth, getArea, *
// and displayData functions.                       *
//***************************************************
double getLength(double length) {
  cout << "Enter a length: ";
  cin >> length;
  return length;
}

double getWidth(double width) {
  cout << "Enter a width: ";
  cin >> width;
  return width;
}

double getArea(double length, double width) {
  return length * width;
}

void displayData(double length, double width, double area) {
  cout << "Rectanle length " << length;
  cout << " width " << width;
  cout << " area is " << area;
}