/*Write a C++ program to implement a class called Date that has 
private member variables for day, month, and year. 
Include member functions to set and get these variables, 
as well as to validate if the date is valid.*/

#include<iostream>
using namespace std;

class Date
{
	private :
		
	int day, month, year;
	
	bool isLeapYear(int y) 
	{
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
	}
	
	public:
		
			void set_date(int d, int m, int y)
			{
				day=d;
				month=m;
				year=y;
			}
			
			void get_day()
			{
				cout<<"\n\n\t Enter a Day : ";
				cin>>day;
			}
			void get_month()
			{
				cout<<"\n\n\t Enter a Month : ";
				cin>>month;
			}
			void get_year()
			{
				cout<<"\n\n\t Enter year : ";
				cin>>year;
			}
			
			bool isValidDate() 
			{
     		   if (month < 1 || month > 12)
       		     return false;

      		   int maxDaysInMonth;

 	       switch (month) 
			{
 		       case 2:
     		        maxDaysInMonth = isLeapYear(year) ? 29 : 28;
          		    break;
    			case 4: case 6: case 9: case 11:
		            maxDaysInMonth = 30;
         		    break;
       			default:
       			    maxDaysInMonth = 31;
  		    }

      		  if (day < 1 || day > maxDaysInMonth)
         		   return false;

 			}
 			
 			void print_day()
 			{
 				cout<<"\n\n\t Day : "<<day;	
			}
			void print_month()
			{
				cout<<"\n\n\t Month : "<<month;
			}
			void print_year()
			{
				cout<<"\n\n\t Year : "<<year;
			}
};

main()
{
	Date D;
	
	D.get_day();
	D.print_day();
	D.get_month();
	D.print_month();
	D.get_year();
	D.print_year();
	D.isValidDate();
}
