/*Write a C++ program to implement a class called Student that has 
private member variables for name, class, roll number, and marks. 
Include member functions to calculate the grade based on the marks 
and display the student's information. 
Accept address from each student implement using of aggregation*/

#include<iostream>
using namespace std;

class Address 
{
    public:
        string houseNumber;
        string city;
        string state;
        string postalCode;

       
        Address(string hNum, string c, string s, string pCode) 
		{
            houseNumber = hNum;
            city = c;
            state = s;
            postalCode = pCode;
        }
        
        void displayAddress() 
		{
            cout << "Address: " << houseNumber << ", " << city << ", " << state << " - " << postalCode << endl;
        }
};


class Student 
{
    private:
        string name;
        string className;
        int rollNumber;
        float marks;
        Address* address;  

    public:
        
        Student(string n, string c, int r, float m, Address* addr) 
		{
            name = n;
            className = c;
            rollNumber = r;
            marks = m;
            address = addr;
        }

        
        char calculateGrade() 
		{
            if (marks >= 90) return 'A';
            else if (marks >= 80) return 'B';
            else if (marks >= 70) return 'C';
            else if (marks >= 60) return 'D';
            else return 'F';
        }

        void displayStudentInfo() 
		{
            cout << "Name: " << name << endl;
            cout << "Class: " << className << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;
            cout << "Grade: " << calculateGrade() << endl;
            
            address->displayAddress();
        }
};

main() 
{  
    Address addr("123", "New York", "NY", "10001");

    
    Student student("John Doe", "10th Grade", 101, 85.5, &addr);

    
    student.displayStudentInfo();

}
