#include <iostream>
#include <cmath>

using namespace std;

double triangleArea(double base, double height) {
    return 0.5 * base * height;
}

double rectangleArea(double length, double width) {
    return length * width;
}

double squareArea(double side) {
    return side * side;
}

int main() {
    int choice;
   double base, height, length, width, side, area;
 
  do{
    cout << "Please Select a shape to calculate the area:" << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Square" << endl;
    cout << "4. Quite program" << endl;


    cout << "Enter Selection:  ";
    cin >> choice; 

    switch (choice) {
        case 1:
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            area = triangleArea(base, height);
            cout << "The area of the triangle is: " << area << endl;
            break;
        case 2:
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            area = rectangleArea(length, width);
            cout << "The area of the rectangle is: " << area << endl;
            break;
        case 3:
            cout << "Enter the side length of the square: ";
            cin >> side;
            area = squareArea(side);
            cout << "The area of the square is: " << area << endl;
            break;

        case 4:
            cout << "Quitting the program..." << endl;
            break;

        default:
           cout << "Your input was: " << choice << " which is an invalid option. " << endl;
           cout <<" enter a valid input!! So,"<< endl;
           break;
        }
    }while (choice != 4);
   
    return 0;
}
