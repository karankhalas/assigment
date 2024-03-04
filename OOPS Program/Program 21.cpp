#include <iostream>
using namespace std;
// Base class
class Base 
{
private:
    int privateMember;

protected:
    int protectedMember;

public:
    int publicMember;

    // Constructor to initialize members
    Base(int priv, int prot, int pub) : privateMember(priv), protectedMember(prot), publicMember(pub) {}

    // Member function to display members
    void displayMembers() const {
        std::cout << "Private Member: " << privateMember << std::endl;
        std::cout << "Protected Member: " << protectedMember << std::endl;
        std::cout << "Public Member: " << publicMember << std::endl;
    }
};

// Derived class with protected inheritance
class DerivedProtected : protected Base {
public:
    // Constructor to initialize members
    DerivedProtected(int priv, int prot, int pub) : Base(priv, prot, pub) {}

    // Function to access and display members
    void accessMembers() const {
        // Access to protected and public members is allowed
        std::cout << "DerivedProtected accessing members:\n";
        // std::cout << "Private Member: " << privateMember << std::endl; // Error: privateMember is private
        std::cout << "Protected Member: " << protectedMember << std::endl;
        std::cout << "Public Member: " << publicMember << std::endl;
    }
};

// Derived class with public inheritance
class DerivedPublic : public Base {
public:
    // Constructor to initialize members
    DerivedPublic(int priv, int prot, int pub) : Base(priv, prot, pub) {}

    // Function to access and display members
    void accessMembers() const {
        // Access to protected and public members is allowed
        std::cout << "DerivedPublic accessing members:\n";
        // std::cout << "Private Member: " << privateMember << std::endl; // Error: privateMember is private
        std::cout << "Protected Member: " << protectedMember << std::endl;
        std::cout << "Public Member: " << publicMember << std::endl;
    }
};

int main() 
{
    // Create objects of derived classes
    DerivedProtected derivedProtected(1, 2, 3);
    DerivedPublic derivedPublic(4, 5, 6);

    // Access and display members in each derived class
    std::cout << "In Main:\n";
    
    // Access and display members using member function in derived classes
    derivedProtected.accessMembers();
    derivedPublic.accessMembers();

    return 0;
}

