#include <iostream>
#include <string>

class Person 
{
private:
    std::string name;
    int age;
    std::string country;

public:
    // Function to set the values of member variables
    void setPersonInfo(std::string n, int a, std::string c) 
	{
        name = n;
        age = a;
        country = c;
    }

    // Function to get the name of the person
    std::string getName() 
	{
        return name;
    }

    // Function to get the age of the person
    int getAge() 
	{
        return age;
    }

    // Function to get the country of the person
    std::string getCountry() 
	{
        return country;
    }
};

int main() 
{
    // Create a Person object
    Person person1;

    // Set the values of member variables
    person1.setPersonInfo("Khalas Karan", 22, "India");

    // Display the information using getter functions
    std::cout << "Person Information:" << std::endl;
    std::cout << "Name: " << person1.getName() << std::endl;
    std::cout << "Age: " << person1.getAge() << std::endl;
    std::cout << "Country: " << person1.getCountry() << std::endl;

    return 0;
}

