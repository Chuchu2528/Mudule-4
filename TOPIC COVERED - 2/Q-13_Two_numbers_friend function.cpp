//Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;

class MaxFinder 
{
    private:
        int num1, num2;
    public:
        MaxFinder(int a, int b) 
		{
            num1 = a;
            num2 = b;
        }

        friend int findMax(MaxFinder mf);
};

int findMax(MaxFinder mf) 
{
    if(mf.num1 > mf.num2)
        return mf.num1;
    else
        return mf.num2;
}

main() 
{
    int a, b;
    cout << "\n\n\t Enter two numbers: ";
    cin >> a >> b;

    MaxFinder mf(a, b);
    int max = findMax(mf);

    cout << "\n\n\t Maximum number is: " << max;
}
