/*Write a program of 
Addition, Subtraction, Division, Multiplication using constructor.*/


#include <iostream>
using namespace std;

class Calculator 
{
        float num1, num2;

    public:
  
        Calculator(float a, float b) 
		{
            num1 = a;
            num2 = b;
        }

  
        void add() 
		{
            cout << "\n\n\t Addition: " << num1 + num2;
        }


        void subtract() 
		{
            cout << "\n\n\t Subtraction: " << num1 - num2;
        }


        void multiply() 
		{
            cout << "\n\n\t Multiplication: " << num1 * num2;
        }


        void divide() 
		{
            if (num2 != 0) 
			{
                cout << "\n\n\t Division: " << num1 / num2;
            } 
			else 
			{
                cout << "\n\n\t Error: Division by zero is not allowed.";
            }
        }
};

main() 
{
    float a, b;

    cout << "\n\n\t Enter number 1 : ";
    cin >> a;
    
    cout << "\n\n\t Enter number 2 : ";
    cin >> b;

    Calculator calc(a, b);

    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();

}

