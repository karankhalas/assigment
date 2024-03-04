#include <iostream>
#include <string>

class Car 
{
private:
    std::string company;
    std::string model;
    int year;

public:
    // Constructor to initialize the object
    Car() 
	{
        company = "";
        model = "";
        year = 0;
    }

    // Function to set the values of member variables
    void setCarInfo(std::string comp, std::string mdl, int yr) 
	{
        company = comp;
        model = mdl;
        year = yr;
    }

    // Function to get the company name
    std::string getCompany() 
	{
        return company;
    }

    // Function to get the model name
    std::string getModel() 
	{
        return model;
    }

    // Function to get the manufacturing year
    int getYear() 
	{
        return year;
    }
};

int main() 
{
    // Create a Car object
    Car myCar;

    // Set the values of member variables
    myCar.setCarInfo("Toyota", "Camry", 2022);

    // Display the information using getter functions
    std::cout << "Car Information:" << std::endl;
    std::cout << "Company: " << myCar.getCompany() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    return 0;
}

