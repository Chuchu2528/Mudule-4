/* Write a C++ program to create a class called Rectangle that has private member
   variables for length and width. 
   Implement member functions to calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;

class Rectangle
{
	int wit, len;
	float area;
	
	public :
		
		void get_length()
		{
			cout<<"\n\n\t Enter Lenght : ";
			cin>>len;
		}
		void get_width()
		{
			cout<<"\n\n\t Enter Width : ";
			cin>>wit;
		}
		void get_area()
		{
			cout<<"\n\n\t Area of Rectangle : "<<len*wit;
		}
		void get_perimeter()
		{
			cout<<"\n\n\t Perimeter of Rectangle ; "<<2*(len+wit);
		}
			
};

main()
{
	Rectangle R;
	
	R.get_length();
	
	R.get_width();
	
	R.get_area();
	
	R.get_perimeter();
}
