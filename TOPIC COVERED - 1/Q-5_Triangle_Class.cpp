/*Write a C++ program to create a class called Triangle that has 
private member variables for the lengths of its three sides. Implement 
member functions to determine if the triangle is equilateral, isosceles, or scalene.*/


#include <iostream>

using namespace std;

class Triangle 
{

    private:
        double side1, side2, side3;


    public:
     
        Triangle(double s1, double s2, double s3) 
		{
            side1 = s1;
            side2 = s2;
            side3 = s3;
        }

    
        bool isEquilateral() 
		{
            return (side1 == side2 && side2 == side3);
        }

 
        bool isIsosceles() 
		{
            return (side1 == side2 || side2 == side3 || side1 == side3);
        }

        bool isScalene() 
		{
            return (side1 != side2 && side2 != side3 && side1 != side3);
        }


        void displayTriangleType() 
		{
            if (isEquilateral()) 
			{
                cout << "\n\n\t The triangle is Equilateral.";
            } else if (isIsosceles()) 
			{
                cout << "\n\n\t The triangle is Isosceles.";
            } else if (isScalene()) 
			{
                cout << "\n\n\t The triangle is Scalene.";
            }
        }
};

main() 
{
  
    double side1, side2, side3;

    cout << "\n\n\t Enter the lengths of the sides1 of the triangle: ";
    cin >> side1;
    
    cout << "\n\n\t Enter the lengths of the sides2 of the triangle: ";
    cin >> side2;
    
    cout << "\n\n\t Enter the lengths of the sides3 of the triangle: ";
    cin >> side3;


    Triangle myTriangle(side1, side2, side3);

    myTriangle.displayTriangleType();


}

