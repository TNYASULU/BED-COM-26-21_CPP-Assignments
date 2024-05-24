#include "Circle.h"  //lHeader file for the Circle class
#include <cmath>

namespace shapes {
    Circle::Circle() : radius(0) {}

    Circle::Circle(double r) : radius(r) {}

    Circle::~Circle() {}

    double Circle::getRadius() const {
        return radius;
    }
}
