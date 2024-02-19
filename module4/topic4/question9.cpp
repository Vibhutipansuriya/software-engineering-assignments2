/* Write a Program of Two 1D Matrix Addition using Operator
Overloading 10.Write a program to concatenate the two strings using
Operator Overloading*/
#include <iostream>
using namespace std;

class Matrix 
{
private:
    int size;
    int* data;

public:
    Matrix(int n) : size(n) 
	{
        data = new int[size];
    }

    // Overloaded + operator matrix addition
    Matrix operator+(const Matrix& other)
	 {
        Matrix result(size);
        for (int i = 0; i < size; ++i) 
		{
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    void input()
	 {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; ++i) 
		{
            cin >> data[i];
        }
    }

    void display() {
        cout << "Matrix: ";
        for (int i = 0; i < size; ++i)
		 {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    ~Matrix() {
        delete[] data;
    }
};

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    Matrix mat1(n), mat2(n), mat3(n);

    cout << "Enter elements for Matrix 1:\n";
    mat1.input();

    cout << "Enter elements for Matrix 2:\n";
    mat2.input();

    mat3 = mat1 + mat2; 

    cout << "Matrix after addition:\n";
    mat3.display();

    return 0;
}
