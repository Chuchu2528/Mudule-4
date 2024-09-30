/*Write a program to find the multiplication values 
and the cubic values using inline function*/

#include <iostream>
using namespace std;

inline int multiply(int a, int b) 
{
    return a * b;
}

inline int cube(int x) 
{
    return x * x * x;
}

main() 
{
    int num1, num2;

    cout << "\n\n\t Enter num1 : ";
    cin >> num1;
    
    cout << "\n\n\t Enter num2 : ";
    cin >> num2;

    cout<<"\n\n\t Multiplication of"<<num1<<"and"<<num2<<"is:"<<multiply(num1, num2);

    cout << "\n\n\t Cube of " << num1 << " is: " << cube(num1);
    cout << "\n\n\t Cube of " << num2 << " is: " << cube(num2);

}
