//Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>

class Base 
{
	private:
    	int privateVar;	

	protected:
    	int protectedVar; 

	public:
   		int publicVar;

    Base() 
	{
        privateVar = 10;
        protectedVar = 20;
        publicVar = 30;
    }

    void displayBase() 
	{
        std::cout << "\n\n\t Base class:";
        std::cout << "\n\n\t Private Var: " << privateVar;
        std::cout << "\n\n\t Protected Var: " << protectedVar;
        std::cout << "\n\n\t Public Var: " << publicVar;
    }
};

class Derived : public Base 
{
	public:
    	void displayDerived() 
		{
        std::cout << "\n\n\t Derived class:";
       
        std::cout << "\n\n\t Protected Var: " << protectedVar;

        std::cout << "Public Var: " << publicVar;
    }
};

main() 
{
    Base base;
    base.displayBase();

    Derived derived;
    derived.displayDerived();

}
