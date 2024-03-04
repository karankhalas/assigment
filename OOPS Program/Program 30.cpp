#include <iostream>

// Template function to perform bubble sort on an array
template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Template function to display the elements of an array
template <typename T>
void displayArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() 
{
    // Sort an array of integers
    int intArray[] = {5, 2, 8, 1, 7};
    int intSize = sizeof(intArray) / sizeof(int);
    std::cout << "Before sorting - Integer Array: ";
    displayArray(intArray, intSize);

    bubbleSort(intArray, intSize);

    std::cout << "After sorting - Integer Array: ";
    displayArray(intArray, intSize);

    // Sort an array of doubles
    double doubleArray[] = {3.14, 1.23, 2.71, 0.99, 4.56};
    int doubleSize = sizeof(doubleArray) / sizeof(double);
    std::cout << "\nBefore sorting - Double Array: ";
    displayArray(doubleArray, doubleSize);

    bubbleSort(doubleArray, doubleSize);

    std::cout << "After sorting - Double Array: ";
    displayArray(doubleArray, doubleSize);

    return 0;
}

