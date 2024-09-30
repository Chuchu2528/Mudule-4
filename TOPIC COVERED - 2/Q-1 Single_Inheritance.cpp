/*Assume a class cricketer is declared. 
Declare a derived class batsman from cricketer. Data member of batsman. 
Total runs, Average runs and best performance. Member functions input data, 
calculate average runs, Display data. (Single Inheritance)*/

#include<iostream>
using namespace std;

class Cricketer
{
	public:
	
		string cname;
		int matches;
		
		void input_cri()
		{
			cout<<"\n\n\t Enter Cricketer's Name :";
			cin>>cname;
			cout<<"\n\n\t Enter Number of Matches Played : ";
			cin>>matches;
			
		}	
		
		void display_cri()
		{
			cout<<"\n\n\t Cricketer's Name :"<<cname;
			cout<<"\n\n\t Matches Played : "<<matches;
		}
};

class Batsman : public Cricketer
{
	private:
	
		int tot_run;
		float avg_run;
		int best_perf;
		
	public:
	
		void input_bats()
		{
			input_cri();
			cout<<"\n\n\t Enter Runs scored: ";
			cin>>tot_run;
			cout<<"\n\n\t Enter Best performance (Highest score): ";
			cin>>best_perf;
			cal_avg_run();
		}	
		
		void cal_avg_run()
		{
			if(matches !=0)
				avg_run = (float)tot_run / matches;
            else
                avg_run = 0;
		}
		
		void display_bats()
		{
			display_cri();
			cout<<"\n\n\t Total Runs scored: "<<tot_run;
			cout<<"\n\n\t Best performance: "<<best_perf;
			cout<<"\n\n\t Average Runs"<<avg_run;
		}
};

main()
{
	Batsman b;
	
	b.input_bats();
	cout<<"\n\n\t Displaying Batsman details : ";
	b.display_bats();
}
