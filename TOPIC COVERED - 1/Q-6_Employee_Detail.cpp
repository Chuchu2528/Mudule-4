/*Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. 
Include member functions to calculate and 
set salary based on employee performance. Using of constructor*/


#include <iostream>
#include <string>

using namespace std;

class Employee 
{

    private:
        string name;
        int employeeID;
        double salary;

   
    public:
     
        Employee(string empName, int empID, double baseSalary) 
		{
            name = empName;
            employeeID = empID;
            salary = baseSalary;
        }

   
        void setSalaryBasedOnPerformance(int performanceRating) 
		{
            if (performanceRating >= 1 && performanceRating <= 5) 
			{
                switch (performanceRating) {
                    case 5:
                        salary += salary * 0.20; // 20% increase for excellent performance
                        break;
                    case 4:
                        salary += salary * 0.10; // 10% increase for very good performance
                        break;
                    case 3:
                        salary += salary * 0.05; // 5% increase for good performance
                        break;
                    case 2:
                        salary += salary * 0.02; // 2% increase for average performance
                        break;
                    case 1:
                        salary -= salary * 0.10; // 10% decrease for poor performance
                        break;
                }
            } 
			else 
			{
                cout << "\n\n\t Invalid performance rating!";
            }
        }

 
        void displayEmployeeDetails() 
		{
            cout << "\n\n\t Employee Name: " << name;
            cout << "\n\n\t Employee ID: " << employeeID;
            cout << "\n\n\t Salary: " << salary;
        }
};

main() 
{

    string empName;
    int empID;
    double baseSalary;
    int performanceRating;

    cout << "\n\n\t Enter employee name: ";
    getline(cin, empName);

    cout << "\n\n\t Enter employee ID: ";
    cin >> empID;

    cout << "\n\n\t Enter base salary: ";
    cin >> baseSalary;

  
    Employee emp(empName, empID, baseSalary);


    cout << "\n\n\t Enter performance rating (1 to 5): ";
    cin >> performanceRating;


    emp.setSalaryBasedOnPerformance(performanceRating);


    emp.displayEmployeeDetails();


}

