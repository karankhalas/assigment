#include <iostream>
using namespace std;
// Base class
class A 
{
public:
    // Default constructor
    A() 
	{
        std::cout << "Constructor of class A called." << std::endl;
    }

    // Parameterized constructor
    A(int val) 
	{
        std::cout << "Parameterized constructor of class A called with value: " << val << std::endl;
    }
};

// Derived class from A
class B : public A {
public:
    // Default constructor
    B() 
	{
        std::cout << "Constructor of class B called." << std::endl;
    }

    // Parameterized constructor
    B(int val) : A(val) 
	{
        std::cout << "Parameterized constructor of class B called with value: " << val << std::endl;
    }
};

// Derived class from B
class C : public B 
{
public:
    // Default constructor
    C() {
        std::cout << "Constructor of class C called." << std::endl;
    }

    // Parameterized constructor
    C(int val) : B(val) 
	{
        std::cout << "Parameterized constructor of class C called with value: " << val << std::endl;
    }
};

int main() 
{
    // Create objects of class C
    std::cout << "\nCreating object c1:\n";
    C c1; // Calls default constructors of A, B, and C

    std::cout << "\nCreating object c2 with value 42:\n";
    C c2(42); // Calls parameterized constructors of A, B, and C

    return 0;
}

