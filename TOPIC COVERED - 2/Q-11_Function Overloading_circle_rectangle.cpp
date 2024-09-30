/*Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
Rectangle: Area * breadth Triangle: ½ *Area* breadth Circle: Pi * Area *Area*/

#include<iostream>
using namespace std;

const float pi = 3.14;

	void area(float r) 
	{
   		float circleArea = pi * r * r;
    	cout << "\n\n\t The area of the circle is: " << circleArea;
	}

	void rec(float l, float b) 
	{
   		float rectangleArea = l * b;
    	cout << "\n\n\t The area of the rectangle is: " << rectangleArea;
	}

	void tria(float b, float h) 
	{
    	float triangleArea = 0.5 * b * h;
    	cout << "\n\n\t The area of the triangle is: " << triangleArea;
	}

main() 
{
    float r, l, b, h;
    	cout << "\n\n\t Enter the radius of the circle: ";
  		cin >> r;
    	area(r);

    	cout << "\n\n\t Enter the length and breadth of the rectangle: ";
    	cin >> l >> b;
    	rec(l, b);

    	cout << "\n\n\t Enter the base and height of the triangle: ";
    	cin >> b >> h;
    	tria(b, h);

}
