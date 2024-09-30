//Define a class to represent a bank account.

#include<iostream>
using namespace std;

class Financial_institution

{
	string fname;
	int acc_no;
	string acc_type;
	int balance;
	
	public :
			void get_depositor()
			{
				cout<<"\n\n\t Input Name of the Depositor : ";
				cin>>fname;
				
				cout<<"\n\n\t Input Account Number : ";
				cin>>acc_no;
				
				cout<<"\n\n\t Input the type of Account : ";
				cin>>acc_type;
				
				cout<<"\n\n\t Input a balance amount : ";
				cin>>balance;
			}
			
			void display()
			{
				cout<<"\n\n\t Name of the Depositor : "<<fname;
				cout<<"\n\n\t Account Number : "<<acc_no;
				cout<<"\n\n\t Type of Account : "<<acc_type;
				cout<<"\n\n\t Balance amount : "<<balance;
			}
			
			void deposit()
			{
				int dep;
				
				cout<<"\n\n\n\t Enter an amount to deposite : ";
				cin>>dep;
				
				balance=balance+dep;
			}
			
			void withdraw()
			{
				int amt;
				
				cout<<"\n\n\n\t Enter an amount for withdrawal : ";
				cin>>amt;
				
				if(balance>amt)
					balance=balance-amt;
					
				else
					cout<<"\n\n\n\t Not Sufficient balance : ";
			}
		
};


main()
{
	Financial_institution obj;
	
	obj.get_depositor();
	obj.display();
	
	obj.deposit();
	obj.display();
	
	obj.withdraw();
	obj.display();
}
