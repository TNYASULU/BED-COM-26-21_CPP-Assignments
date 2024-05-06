// Main.cpp - Main function
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    // Create rectangle object with the provided length and width
    Rectangle rectangle;

    float Length, Width;
    cout << "Input the length of the rectangle: ";
    cin >> Length;
    cout << "Input the width of the rectangle: ";
    cin >> Width;

    // Set the length and width
    rectangle.setLength(Length);
    rectangle.setWidth(Width);

    // Setting the length and width of rectangle using the overloaded constructor rect
    Rectangle rect(Length, Width);

    // Calculate and display the area of rect
    float area = rect.getArea();
    cout << "\nArea of the newly created rectangle: " << area << endl;

    // calculate and display the area of the rectangle
    float Area = rectangle.getArea(); // calculate using the rectangle object
    cout << "\nArea: " << Area << endl; // output the calculated area
    return 0;
}
