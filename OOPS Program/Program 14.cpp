#include <iostream>
using namespace std;
class Date 
{
private:
    int day;
    int month;
    int year;

public:
    // Function to set day
    void setDay(int d) 
	{
        if (d > 0 && d <= 31) 
		{
            day = d;
        } else 
		{
            std::cout << "Invalid day value. Setting to default (1).\n";
            day = 1;
        }
    }

    // Function to set month
    void setMonth(int m) 
	{
        if (m > 0 && m <= 12) 
		{
            month = m;
        } else {
            std::cout << "Invalid month value. Setting to default (1).\n";
            month = 1;
        }
    }

    // Function to set year
    void setYear(int y) 
	{
        if (y > 0) 
		{
            year = y;
        } else 
		{
            std::cout << "Invalid year value. Setting to default (2022).\n";
            year = 2022;
        }
    }

    // Function to get day
    int getDay() const 
	{
        return day;
    }

    // Function to get month
    int getMonth() const 
	{
        return month;
    }

    // Function to get year
    int getYear() const 
	{
        return year;
    }

    // Function to validate if the date is valid
    bool isValidDate() const {
        if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
            return false;
        }

        // Check for months with 30 days
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            return false;
        }

        // Check for February and leap year
        if (month == 2) 
		{
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
			{
                // Leap year
                return day <= 29;
            } else 
			{
                // Non-leap year
                return day <= 28;
            }
        }

        return true;
    }
};

int main() 
{
    // Create a Date object
    Date myDate;

    // Set date values
    myDate.setYear(2024);
    myDate.setMonth(3);
    myDate.setDay(2);

    // Display date information
    std::cout << "Date Information:\n";
    std::cout << "Day: " << myDate.getDay() << std::endl;
    std::cout << "Month: " << myDate.getMonth() << std::endl;
    std::cout << "Year: " << myDate.getYear() << std::endl;

    // Check if the date is valid
    std::cout << "Is Valid Date? " << (myDate.isValidDate() ? "Yes" : "No") << std::endl;

    return 0;
}

