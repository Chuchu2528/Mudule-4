// Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <string>

class String 
{
	private:
    	std::string str;
	public:
    	String(const std::string& s) : str(s) {}

    String operator+(const String& other) 
	{
        String result(this->str + other.str);
        return result;
    }

    void display() 
	{
        std::cout << str << std::endl;
    }
};

main() 
{
    String str1("\n\n\t Hello, ");
    String str2("\n\n\t World!");

    String result = str1 + str2;
    result.display();
    
}
