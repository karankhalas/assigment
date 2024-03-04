#include <iostream>
#include <cstring>
using namespace std;
class ConcatenatedString 
{
private:
    char* concatenatedString;

public:
    // Constructor to initialize the concatenated string
    ConcatenatedString(const char* str1, const char* str2) 
	{
        // Allocate memory for concatenated string
        concatenatedString = new char[strlen(str1) + strlen(str2) + 1];

        // Copy the first string into the concatenated string
        strcpy(concatenatedString, str1);

        // Concatenate the second string to the end of the first string
        strcat(concatenatedString, str2);
    }

    // Function to display the concatenated string
    void display() const 
	{
        std::cout << "Concatenated String: " << concatenatedString << std::endl;
    }

    // Destructor to free memory
    ~ConcatenatedString() 
	{
        delete[] concatenatedString;
    }
};

int main() 
{
    // Strings to concatenate
    const char* str1 = "Hello, ";
    const char* str2 = "world!";

    // Create an object of ConcatenatedString
    ConcatenatedString concatenated(str1, str2);

    // Display the concatenated string
    concatenated.display();

    return 0;
}

