#include <iostream>
int findMax(int arr[], int size) 
{
    int maxNum = arr[0]; // Assume the first element is the maximum

    for (int i = 1; i < size; i++) 
	{
        if (arr[i] > maxNum) 
		{
            maxNum = arr[i]; // Update maxNum if a larger element is found
        }
    }

    return maxNum;
}

int main() 
{
    // Declare variables
    const int maxSize = 100; // Maximum size of the array
    int arr[maxSize];
    int size;

    // Get input from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) 
	{
        std::cin >> arr[i];
    }

    // Call the function to find the maximum number
    int maxNumber = findMax(arr, size);

    
    std::cout << "The maximum number in the array is: " << maxNumber << std::endl;

    return 0;
}

