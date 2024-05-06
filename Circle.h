// Circle.h - Header file for the Circle class
#pragma once

namespace shapes {
    class Circle {
    private:
        double radius;

    public:
        Circle(); // Default constructor

        Circle(double r);// Overloaded constructor

        ~Circle();// Destructor

        double getRadius() const; // Getter method for radius
    };
}

