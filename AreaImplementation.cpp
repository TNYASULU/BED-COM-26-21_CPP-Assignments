//implementation of the area class
#include "Area.h"
#include <cmath>
/*function  calculating and returning the area of a square based on
a square object passed into it*/
double Area::calculateSquareArea(const shapes::Square& square) {
    return square.getSideLength() * square.getSideLength();
}

/*function calculating and returning the area of a triangle based on
a triangle object passed into it*/
double Area::calculateTriangleArea(const shapes::Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

/* function calculating and returning the area of a circle based on a
circle object passed into it*/

double Area::calculateCircleArea(const shapes::Circle& circle) {
    return M_PI * circle.getRadius() * circle.getRadius();
}
