/*Write a C++ program to implement a class called Circle that has private member 
variables for radius. 
Include member functions to calculate the circle's area and circumference.*/

#include<iostream>
using namespace std;
class Circle
{
	
			int rad;
			float pi;
	
	public :
			void get_radious()
			{
				cout<<"\n\n\t Input Radious : ";
				cin>>rad;
				
				pi=3.14;
			}
		
			void area()
			{
				cout<<"\n\n\t Area of Circle : "<<pi*rad*rad;
			}
			
			void circumference()
			{
				cout<<"\n\n\t Circumference of Circle : "<<2*pi*rad;
			}
};

main()
{
	Circle C;
	
	C.get_radious();
	
	C.area();
	
	C.circumference();
}
