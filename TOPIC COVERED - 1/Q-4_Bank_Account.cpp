/*Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. 
Include member functions to deposit and withdraw money from the account*/


#include<iostream>
using namespace std;

class Bank
{
	string dname;
	int acc_no;
	string acc_type;
	int balance;
	
	public :
			void get_depositor()
			{
				cout<<"\n\n\t Input Name of the Depositor : ";
				cin>>dname;
				
				cout<<"\n\n\t Input Account Number : ";
				cin>>acc_no;
				
				cout<<"\n\n\t Input the type of Account : ";
				cin>>acc_type;
				
				cout<<"\n\n\t Input a balance amount : ";
				cin>>balance;
			}
			
			void display()
			{
				cout<<"\n\n\t Name of the Depositor : "<<dname;
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
	Bank B;
	
	B.get_depositor();
	B.display();
	
	B.deposit();
	B.display();
	
	B.withdraw();
	B.display();
	
}
