//WAP to create simple calculator using class

#include<iostream>
using namespace std;

class calculator
{
		int x1, x2;
		
		public :
				void get_numbers()
				{
					cout<<"\n\n\n\t Input any two numbers : ";
					cin>>x1>>x2;
				}
				
				void print_numbers()
				{
					cout<<"\n\n\t x1 = "<<x1<<"\n\n\t x2 = "<<x2;
				}
				
				void add()
				{
					cout<<"\n\n\t Addition = "<<x1+x2;
				}
				
				void sub()
				{
					cout<<"\n\n\t Subtraction = "<<x1-x2;
				}
				void mul()
				{
					cout<<"\n\n\t Multiplication = "<<x1*x2;
				}
				void div()
				{
					cout<<"\n\n\t Division = "<<x1/x2; 
				}
};


main()
{
	calculator C;
	
	C.get_numbers();
	C.print_numbers();
	C.add();
	C.sub();
	C.mul();
	C.div();
	
}
