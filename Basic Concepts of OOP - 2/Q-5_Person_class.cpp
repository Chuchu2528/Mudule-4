/*Write a C++ program to create a class 
called Person that has private member variables for name, age and country.
Implement member functions to set and get the values of these variables.*/ 

#include<iostream>
using namespace std;

class Person
{
	string pname;
	int per_age;
	string per_con;
	
	public: 

	void get_person()
	{
		cout<<"\n\n\t Enter Person name : ";
		cin>>pname;
		
		cout<<"\n\n\t Enter Person age : ";
		cin>>per_age;
		
		cout<<"\n\n\t Enter contry : ";
		cin>>per_con;
		
	}
	
	void print_person()
	{
		cout<<"\n\n\t Enter Person name : "<<pname;
		cout<<"\n\n\t Enter Person age : "<<per_age;
		cout<<"\n\n\t Enter contry : "<<per_con;
	}
		
};

main()
{
	Person P;
	
	P.get_person();
	
	P.print_person();
	
}
