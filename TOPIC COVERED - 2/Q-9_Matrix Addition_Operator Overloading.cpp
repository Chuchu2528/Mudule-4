//Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>

class Matrix 
{
	private:
    	int* arr;
    	int size;

	public:
    	Matrix(int n) 
		{
        	size = n;
        	arr = new int[size];
    	}

    ~Matrix() 
	{
        delete[] arr;
    }

    void input() 
	{
        std::cout << "Enter " << size << " elements: ";
        
        for (int i = 0; i < size; i++) 
		{
            std::cin >> arr[i];
        }
    }

    void display() 
	{
        std::cout << "Matrix: ";
        
        for (int i = 0; i < size; i++) 
		{
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    Matrix operator+(const Matrix& m) 
	{
        Matrix result(size);
        for (int i = 0; i < size; i++) 
		{
            result.arr[i] = arr[i] + m.arr[i];
        }
        return result;
    }
};

main() 
{
    int n;
    std::cout << "\n\n\t Enter the size of the matrices: ";
    std::cin >> n;

    Matrix m1(n);
    std::cout << "\n\n\t Enter elements of Matrix 1: ";
    m1.input();
    m1.display();

    Matrix m2(n);
    std::cout << "\n\n\t Enter elements of Matrix 2: ";
    m2.input();
    m2.display();

    Matrix result = m1 + m2;
    std::cout << "\n\n\t Resultant Matrix: ";
    result.display();

}
