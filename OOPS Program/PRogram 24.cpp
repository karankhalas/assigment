#include <iostream>
using namespace std;
class Matrix 
{
private:
    int size;
    int* elements;

public:
    // Constructor to initialize the matrix with a given size
    Matrix(int s) : size(s), elements(new int[size]) {}

    // Overloaded addition operator to add two matrices
    Matrix operator+(const Matrix& other) const 
	{
        if (size != other.size) 
		{
            std::cerr << "Error: Matrices should have the same size for addition." << std::endl;
            return Matrix(0); // Returning a matrix with size 0 in case of an error
        }

        Matrix result(size);

        for (int i = 0; i < size; ++i) {
            result.elements[i] = elements[i] + other.elements[i];
        }

        return result;
    }

    // Function to display the matrix
    void display() const {
        for (int i = 0; i < size; ++i) {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }

    // Destructor to free memory
    ~Matrix() {
        delete[] elements;
    }
};

int main() {
    // Create two matrices
    Matrix matrix1(5);
    Matrix matrix2(5);

    // Initialize matrix elements (for demonstration purposes)
    for (int i = 0; i < 5; ++i) {
        matrix1.display();
        matrix2.display();
    }
    std::cout << "Matrix1 + Matrix2:\n";

    // Perform matrix addition using operator overloading
    Matrix resultMatrix = matrix1 + matrix2;

    // Display the result matrix
    resultMatrix.display();

    return 0;
}

