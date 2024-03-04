#include <iostream>
#include <string>
using namespace std;
class Lecturer 
{
private:
    std::string lecturerName;
    std::string subjectName;
    std::string courseName;
    int numberOfLectures;

public:
    // Constructor to initialize lecturer details
    Lecturer(const std::string& name, const std::string& subject, const std::string& course, int numLectures) 
	{
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        numberOfLectures = numLectures;
    }

    // Function to add lecture details
    void addLectureDetails() 
	{
        std::cout << "Enter details for Lecture " << numberOfLectures + 1 << ":\n";
        std::cout << "Subject: ";
        std::cin.ignore(); // Ignore previous newline character
        std::getline(std::cin, subjectName);
        std::cout << "Course: ";
        std::getline(std::cin, courseName);
        numberOfLectures++;
    }

    // Function to display name and lecture details
    void displayDetails() const 
	{
        std::cout << "Lecturer: " << lecturerName << std::endl;
        std::cout << "Subject: " << subjectName << std::endl;
        std::cout << "Course: " << courseName << std::endl;
        std::cout << "Number of Lectures: " << numberOfLectures << std::endl;
    }
};

int main() 
{
    // Create an array of Lecturer objects to handle details of 5 lecturers
    const int numberOfLecturers = 5;
    Lecturer lecturers[numberOfLecturers] = {
        {"Karan", "Computer Science", "Introduction to Programming", 3},
        {"Meet", "Mathematics", "Calculus", 2},
        {"Raj", "Physics", "Mechanics", 4},
        {"Chirag", "History", "World History", 3},
        {"Dev", "English", "Literature", 5}
    };

    // Display initial details of lecturers
    std::cout << "Initial Details of Lecturers:\n";
    for (int i = 0; i < numberOfLecturers; ++i) 
	{
        lecturers[i].displayDetails();
        std::cout << "------------------------\n";
    }

    // Add lecture details for each lecturer
    for (int i = 0; i < numberOfLecturers; ++i) 
	{
        lecturers[i].addLectureDetails();
    }

    // Display updated details of lecturers
    std::cout << "\nUpdated Details of Lecturers:\n";
    for (int i = 0; i < numberOfLecturers; ++i) 
	{
        lecturers[i].displayDetails();
        std::cout << "------------------------\n";
    }

    return 0;
}

