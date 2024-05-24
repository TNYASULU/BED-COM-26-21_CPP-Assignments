// Rectangle.cpp - Implementation file for Rectangle class
#include "Rectangle.h"

// defining member functions
void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getArea() {
    return length * width;
}
