//declaring Area class inside my program
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area {
    //static member function
public:
    static double calculateSquareArea(const shapes::Square& square); // calculating area of  square
    static double calculateTriangleArea(const shapes::Triangle& triangle);//calculating area of a triangle
    static double calculateCircleArea(const shapes::Circle& circle);//calculating area of a circle
};