//Write a C++ Program display Student Mark sheet using Multiple inheritance.

#include<iostream>
using namespace std;

class Student
{
	protected:
		
		string sname;
		int rollno;
	
	public:
		
		void get_stud()
		{
			cout<<"\n\n\t Enter Student name :";
			cin>>sname;
			cout<<"\n\n\t Enter Student Roll no.: ";
			cin>>rollno;
		}	
		
		void display_stud()
		{
			cout<<"\n\n\t Enter Student name :"<<sname;
			cout<<"\n\n\t Enter Student Roll no.: "<<rollno;
		}
};

class Marks
{
	protected:
		float sub1, sub2, sub3;
		 
	public:
		
		void get_marks()
		{
			cout<<"\n\n\t Input sub 1 marks :";
			cin>>sub1;
			cout<<"\n\n\t Input sub 2 marks :";
			cin>>sub2;
			cout<<"\n\n\t Input sub 3 marks :";
			cin>>sub3;
		}
        
        void print_marks()
        {
        	cout<<"\n\n\t Marks in Subject 1 :"<<sub1;
			cout<<"\n\n\t Marks in Subject 2 :"<<sub2;
			cout<<"\n\n\t Marks in Subject 3 :"<<sub3;
		}
};

class Marksheet : public Student, public Marks
{
	public:
		
		void display_Marksheet()
		{
			display_stud();
			print_marks();
			
			float total = sub1 + sub2 + sub3;
		
       		float percentage = total / 3;
        
       		cout<<"\n\n\t Total Marks: " << total;
        
        	cout<<"\n\n\t Percentage: " << percentage << "%";
        	
		}	
};

main()
{
	Marksheet m;
	
	m.get_stud();
	
	m.get_marks();
	
	cout<<"\n\n\t -----Student Marksheet----- ";
	
	m.display_Marksheet();
}
