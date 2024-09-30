/*Write a C++ program to create a class called Car that has private member 
variables for company, model, and year. 
Implement member functions to get and set these variables.*/


#include <iostream>
#include <string>

using namespace std;

class Car 
{
   
    private:
        string company;
        string model;
        int year;


    public:

        void setCompany(string c) 
		{
            company = c;
        }


        string getCompany() 
		{
            return company;
        }


        void setModel(string m) 
		{
            model = m;
        }

        string getModel() 
		{
            return model;
        }


        void setYear(int y) 
		{
            year = y;
        }


        int getYear() 
		{
            return year;
        }


        void displayDetails() 
		{
            cout << "\n\n\t Car Details:";
            cout << "\n\n\t Company: " << getCompany();
            cout << "\n\n\t Model: " << getModel();
            cout << "\n\n\t Year: " << getYear();
        }
};

main() 
{
   
    Car myCar;

 
    myCar.setCompany("Toyota");
    myCar.setModel("Corolla");
    myCar.setYear(2021);


    myCar.displayDetails();

}

