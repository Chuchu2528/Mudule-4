//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include<iostream>
using namespace std;

class Base 
{
	public:
    	Base() 
		{
        	cout << "\n\n\t Base class constructor called!";
  		}
};


class Derived1 : public Base 

{
	public:
   		Derived1() 
			{
      			cout << "\n\n\t Derived1 class constructor called!";
    		}
};

class Derived2 : public Derived1 

{
	public:
  		Derived2() 
		  	{
        		cout << "\n\n\t Derived2 class constructor called!";
   			}
};

main() 
{   
    Derived2 obj;

}
