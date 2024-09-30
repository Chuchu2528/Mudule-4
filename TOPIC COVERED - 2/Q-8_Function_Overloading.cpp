/*Write a program to Mathematic operation like Addition, Subtraction, Multiplication, 
Division Of two number using different parameters and Function Overloading*/

#include<iostream>
using namespace std;

class Arithmetic
{
	int n1, n2;
	
	public:
		
		void add(int a, int b)
		{
			n1=a;
			n2=b;	
			cout<<"\n\n\t Addition of 2 values : "<<n1+n2;
		}
		
		void subtract(int a, int b)
		{
			n1=a;
			n2=b;	
			cout<<"\n\n\t Subtraction of 2 values : "<<n1-n2;
		}
		
		void multiply(int a, int b)
		{
			n1=a;
			n2=b;	
			cout<<"\n\n\t Multiplication of 2 values : "<<n1*n2;
		}
		
		void divide(int a, int b)
		{
			n1=a;
			n2=b;	
			
			if (n2 != 0)
            {
                cout << "\n\n\t Division of 2 values : " << n1 / n2;
            }
            else
            {
                cout << "\n\n\t Division by zero is not allowed!";
            }
		}
		
};

main()
{
	Arithmetic A;
	
	A.add(10, 20);
	
	A.subtract(25, 20);
	
	A.multiply(25, 4);
	
	A.divide(100, 5);
}
