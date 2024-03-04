#include <iostream>
using namespace std;
// Base class for Student
class Student 
{
protected:
    int rollNumber;

public:
    // Default constructor
    Student() : rollNumber(0) {}

    // Parameterized constructor
    Student(int roll) : rollNumber(roll) {}

    // Function to display roll number
    void displayRollNumber() const 
	{
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

// Derived class for Test
class Test : public Student 
{
protected:
    int subject1Marks;
    int subject2Marks;

public:
    // Default constructor
    Test() : subject1Marks(0), subject2Marks(0) {}

    // Parameterized constructor
    Test(int roll, int marks1, int marks2) : Student(roll), subject1Marks(marks1), subject2Marks(marks2) {}

    // Function to display marks in subjects
    void displaySubjectMarks() const 
	{
        std::cout << "Subject 1 Marks: " << subject1Marks << std::endl;
        std::cout << "Subject 2 Marks: " << subject2Marks << std::endl;
    }
};

// Derived class for Result
class Result : public Test 
{
private:
    int totalMarks;

public:
    // Default constructor
    Result() : totalMarks(0) {}

    // Parameterized constructor
    Result(int roll, int marks1, int marks2) : Test(roll, marks1, marks2), totalMarks(0) {}

    // Function to calculate total marks
    void calculateTotalMarks() 
	{
        totalMarks = subject1Marks + subject2Marks;
    }

    // Function to display total marks
    void displayTotalMarks() const {
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main() 
{
    // Create a Result object
    Result studentResult(101, 85, 90);

    // Calculate total marks for Result
    studentResult.calculateTotalMarks();

    // Display data for Result
    std::cout << "\nStudent Result:\n";
    studentResult.displayRollNumber();
    studentResult.displaySubjectMarks();
    studentResult.displayTotalMarks();

    return 0;
}

