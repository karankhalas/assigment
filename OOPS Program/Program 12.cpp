#include <iostream>
using namespace std;
class Triangle 
{
private:
    double side1, side2, side3;

public:
    // Constructor to initialize the sides of the triangle
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Function to determine the type of triangle
    void determineType() 
	{
        if (side1 == side2 && side2 == side3) 
		{
            std::cout << "Equilateral Triangle\n";
        } else if (side1 == side2 || side2 == side3 || side1 == side3) 
		{
            std::cout << "Isosceles Triangle\n";
        } else 
		{
            std::cout << "Scalene Triangle\n";
        }
    }
};

int main() 
{
    // Get input for the sides of the triangle
    double s1, s2, s3;
    std::cout << "Enter the length of side 1: ";
    std::cin >> s1;
    std::cout << "Enter the length of side 2: ";
    std::cin >> s2;
    std::cout << "Enter the length of side 3: ";
    std::cin >> s3;

    // Create a Triangle object
    Triangle myTriangle(s1, s2, s3);

    // Determine and display the type of triangle
    myTriangle.determineType();

    return 0;
}

