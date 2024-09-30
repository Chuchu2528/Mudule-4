/* Create a class person having members name and age. 
Derive a class student having member percentage. Derive another 
class teacher having member salary. Write necessary member function to initialize, 
read and write data. Write also Main function (Multiple Inheritance)*/

#include<iostream>
using namespace std;

class Person
{
	protected:
		
		string pname;
		int age;
	
	public:
		
		void get_detail()
		{
			pname ="Name : Madhuri";
			age =30;
		}
};

class Student
{
	protected :
	
		int percentage;
	
	public:
		
		void get_per()
		{
			percentage = 80;
		}
		
};

class Teacher : public Person , public Student 
{
	int salary;
	
	public:
		
		void get_tea_sal()
		{
			salary = 50000;
		}
		
		void print()
		{
			cout<<"\n\n\t Person name : "<<pname;
			cout<<"\n\n\t Person age : "<<age;
			cout<<"\n\n\t Percentage : "<<percentage;
			cout<<"\n\n\t Teacher salary : "<<salary;
		}
};

main()
{
	Teacher t;
	
	t.get_detail();
	
	t.get_per();
	
	t.get_tea_sal();
	
	t.print();
	 
}

