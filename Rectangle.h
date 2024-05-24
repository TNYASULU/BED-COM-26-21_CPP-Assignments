// Rectangle.h - Header file for Rectangle class
#pragma once
class Rectangle {
private:
    float Length;
    float Width;

public:
    float length;  // length of rectangle
    float width;   // breadth of rectangle
     //default constructor
     Rectangle() : length(0), width(0) {}
     
     // Overloaded constructor with parameters
    Rectangle(float l, float w) : length(l), width(w) {}

    // declaring member functions
    void setLength(float l);
    void setWidth(float w);
    float getArea();
};
