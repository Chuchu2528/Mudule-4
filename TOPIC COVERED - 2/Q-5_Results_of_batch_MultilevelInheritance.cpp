/*Assume that the test results of a batch of students are stored in three 
different classes. Class Students are storing the roll number. 
Class Test stores the marks obtained in two subjects and 
class result contains the total marks obtained in the test. 
The class result can inherit the details of 
the marks obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include<iostream>
using namespace std;

class Student
{
	protected:
		
		int rollno;
		
	public:
		
		void get_Rollno()
		{
			rollno = 25;
		}
		
		void print_rollno()
		{
			cout<<"\n\n\t Roll no.: "<<rollno;
		}
		
};

class Test : public Student

{
	protected :
		
		float sub1, sub2;	
		
	public:
		
		void get_marks()
			{
				sub1 = 80;
				sub2 = 89;
			}
		
		void print_marks()
		{
			cout<<"\n\n\t Marks in sub1 : "<<sub1;
			cout<<"\n\n\t Marks in sub2 : "<<sub2;
		}
};

class Result : public Test
{
	public:
	
		void display_result()
		{
			print_rollno();
			print_marks();
			
			float totalmarks = sub1 + sub2;
			cout<<"\n\n\t Total Marks : "<<totalmarks;	
		}
};

main()
{
	Result R;
	
	R.get_Rollno();
	
	R.get_marks();
	
	cout<<"\n\n\t -----Student Marksheet----- ";
	
	R.display_result();
}
