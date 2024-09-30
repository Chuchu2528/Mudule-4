/*Write a program to swap the two numbers 
using friend function without using third variable*/

#include<iostream>
using namespace std;

class Swap 
{
    private:
        int a, b;
    public:
        Swap(int x, int y) 
		{
            a = x;
            b = y;
        }
        void display() 
		{
            cout << "\n\n\t Before swap: a = " << a << ", b = " << b;
        }
        friend void swap(Swap &s) 
		{
            s.a = s.a + s.b; 
            s.b = s.a - s.b; 
            s.a = s.a - s.b; 
        }
        void displayAfterSwap() 
		{
            cout << "\n\n\t After swap: a = " << a << ", b = " << b;
        }
};

main() 
{
    Swap s(5, 10);
    s.display();
    swap(s);
    s.displayAfterSwap();
}
