#include <iostream>
using namespace std;
class Rectangle 
{
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double len, double wid) 
	{
        length = len;
        width = wid;
    }

    // Function to calculate the area of the rectangle
    double calculateArea() 
	{
        return length * width;
    }

    // Function to calculate the perimeter of the rectangle
    double calculatePerimeter() 
	{
        return 2 * (length + width);
    }
};

int main() 
{
    // Create a rectangle object with length 4.0 and width 3.0
    Rectangle myRectangle(4.0, 3.0);

    // Calculate and display the area of the rectangle
    std::cout << "Area of the rectangle: " << myRectangle.calculateArea() << std::endl;

    // Calculate and display the perimeter of the rectangle
    std::cout << "Perimeter of the rectangle: " << myRectangle.calculatePerimeter() << std::endl;

    return 0;
}

