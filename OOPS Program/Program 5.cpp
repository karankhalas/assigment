#include <iostream>
#include <cmath>

class Circle 
{
private:
    double radius;

public:
    
    Circle(double r) 
	{
        radius = r;
    }

    // Function to calculate the area of the circle
    double calculateArea() 
	{
        return M_PI * radius * radius; // M_PI is a constant representing pi
    }

    // Function to calculate the circumference of the circle
    double calculateCircumference() 
	{
        return 2 * M_PI * radius;
    }
};

int main() 
{
    // Create a circle object with a radius of 5.0
    Circle myCircle(5.0);

    // Calculate and display the area of the circle
    std::cout << "Area of the circle: " << myCircle.calculateArea() << std::endl;

    // Calculate and display the circumference of the circle
    std::cout << "Circumference of the circle: " << myCircle.calculateCircumference() << std::endl;

    return 0;
}

