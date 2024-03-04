#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height, char type) 
{
    if (type == 'E' || type == 'e') { // Equilateral triangle
        return 0.5 * base * height;
    } else { // Regular triangle
        return 0.5 * base * height;
    }
}

int main() 
{
    // Calculate and display the area of a circle
    double circleRadius = 5.0;
    double circleArea = calculateArea(circleRadius);
    std::cout << "Area of Circle with radius " << circleRadius << ": " << circleArea << std::endl;

    // Calculate and display the area of a rectangle
    double rectangleLength = 4.0;
    double rectangleBreadth = 6.0;
    double rectangleArea = calculateArea(rectangleLength, rectangleBreadth);
    std::cout << "Area of Rectangle with length " << rectangleLength << " and breadth " << rectangleBreadth
              << ": " << rectangleArea << std::endl;

    // Calculate and display the area of a triangle (equilateral)
    double triangleBase = 3.0;
    double triangleHeight = 2.0;
    char triangleType = 'E';
    double triangleArea = calculateArea(triangleBase, triangleHeight, triangleType);
    std::cout << "Area of Equilateral Triangle with base " << triangleBase << " and height " << triangleHeight
              << ": " << triangleArea << std::endl;

    // Calculate and display the area of a triangle (regular)
    triangleType = 'R';
    triangleArea = calculateArea(triangleBase, triangleHeight, triangleType);
    std::cout << "Area of Regular Triangle with base " << triangleBase << " and height " << triangleHeight
              << ": " << triangleArea << std::endl;

    return 0;
}

