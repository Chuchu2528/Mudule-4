//Write a C++ Program to find Area of Rectangle using inheritance length × width.

#include<iostream>
using namespace std;

class area
{
	int len, wid;
	float A;
	
	public:
		
			void get_area_rec()
			{
				cout<<"\n\n\t Enter Length of Rectangle : ";
				cin>>len;
				
				cout<<"\n\n\t Enter Width of Rectangle : ";
				cin>>wid;
				
				A = len * wid;
				
			}
			
			void display_area_rec()
			{
				cout<<"\n\n\t Area of Rectangle :"<<A;
			}
		
};

main()
{
	area a;
	
	a.get_area_rec();
	a.display_area_rec();
}
