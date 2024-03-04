#include <iostream>
using namespace std;
// Base class
class Shape 
{
public:
    // Function to calculate area (pure virtual function)
    virtual double calculateArea() const = 0;

    // Function to display information
    void displayInfo() const 
	{
        std::cout << "Shape Information:\n";
        std::cout << "Area: " << calculateArea() << std::endl;
    }
};

// Derived class (Rectangle)
class Rectangle : public Shape 
{
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Function to calculate area of rectangle
    double calculateArea() const override 
	{
        return length * width;
    }

    // Function to display rectangle information
    void displayRectangleInfo() const 
	{
        std::cout << "Rectangle Information:\n";
        std::cout << "Length: " << length << std::endl;
        std::cout << "Width: " << width << std::endl;
    }
};

int main() 
{
    // Create a Rectangle object
    Rectangle myRectangle(5.0, 8.0);

    // Display rectangle information and area using inheritance
    myRectangle.displayRectangleInfo();
    myRectangle.displayInfo();

    return 0;
}

