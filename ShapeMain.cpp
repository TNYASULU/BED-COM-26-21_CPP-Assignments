#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

int main() {
    char choice;
    do {
        std::cout << "Options:\n";
        std::cout << "1. Calculate the area of a square\n";
        std::cout << "2. Calculate the area of a triangle\n";
        std::cout << "3. Calculate the area of a circle\n";
        std::cout << "4. Quit\n";

        std::cin >> choice;

        switch(choice) {
            case '1': {
                double side;
                std::cout << "Enter side length of square: ";
                std::cin >> side;
                shapes::Square square(side);
                std::cout << "Area of square: " << Area::calculateSquareArea(square) << std::endl;
                break;
            }
            case '2': {
                double base, height;
                std::cout << "Enter base length of triangle: ";
                std::cin >> base;
                std::cout << "Enter height of triangle: ";
                std::cin >> height;
                shapes::Triangle triangle(base, height);
                std::cout << "Area of triangle: " << Area::calculateTriangleArea(triangle) << std::endl;
                break;
            }
            case '3': {
                double radius;
                std::cout << "Enter radius of circle: ";
                std::cin >> radius;
                shapes::Circle circle(radius);
                std::cout << "Area of circle: " << Area::calculateCircleArea(circle) << std::endl;
                break;
            }
            case '4':
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while(choice != '4');

    return 0;
}
