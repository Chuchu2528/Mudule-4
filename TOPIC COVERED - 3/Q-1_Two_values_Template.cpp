//Write a program of to swap the two values using template

#include <iostream>

template <typename T>
void swap(T &a, T &b) 
{
    T temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int x = 5;
    int y = 10;

    std::cout << "\n\n\t Before swap: x = " << x << ", y = " << y;

    swap(x, y);

    std::cout << "\n\n\t After swap: x = " << x << ", y = " << y;

}
