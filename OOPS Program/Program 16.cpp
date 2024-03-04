#include <iostream>
using namespace std;
class Cricketer 
{
protected:
    std::string playerName;
    int playerAge;

public:
    // Function to input data
    void inputData() 
	{
        std::cout << "Enter player name: ";
        std::cin >> playerName;
        std::cout << "Enter player age: ";
        std::cin >> playerAge;
    }

    // Function to display data
    void displayData() const 
	{
        std::cout << "Player Name: " << playerName << std::endl;
        std::cout << "Player Age: " << playerAge << std::endl;
    }
};

class Batsman : public Cricketer 
{
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    // Function to input additional data for Batsman
    void inputBatsmanData() 
	{
        std::cout << "Enter total runs: ";
        std::cin >> totalRuns;
        std::cout << "Enter best performance: ";
        std::cin >> bestPerformance;
    }

    // Function to calculate average runs
    void calculateAverageRuns() 
	{
        // Assuming averageRuns is calculated based on totalRuns
        averageRuns = static_cast<double>(totalRuns) / 50; // Assuming 50 matches
    }

    // Function to display Batsman data
    void displayBatsmanData() const 
	{
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() 
{
    // Create a Batsman object
    Batsman myBatsman;

    // Input data for Cricketer
    myBatsman.Cricketer::inputData();

    // Input additional data for Batsman
    myBatsman.inputBatsmanData();

    // Calculate average runs for Batsman
    myBatsman.calculateAverageRuns();

    // Display data for Cricketer
    std::cout << "\nCricketer Information:\n";
    myBatsman.Cricketer::displayData();

    // Display additional data for Batsman
    std::cout << "\nBatsman Information:\n";
    myBatsman.displayBatsmanData();

    return 0;
}

