/*Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
Circle: Pi * Area * Area; Rectangle: Area * breadth Triangle: 1⁄2 *Area*breadth
*/
#include<iostream>
using namespace std;
class calculate_area
{
	public:
		float area(float area )
		{
			float circle,pi;
			cout << "Enter the value of pi :: ";
			cin >> pi;
			circle = pi * area * area;
			return circle;
		}

		void area()
		{
			int length,width,rectangle;
			cout << "Enter the length and width ::";
			cin >> length >> width;
			rectangle = length * width;
			cout << "Area of Rectangle = " << rectangle;
		}

		int area(float base , float height)
		{
			float triangle;
			triangle = (base * height) / 2;
			return triangle;
		}
};
int main()
{
	calculate_area a1;
	cout << "Area of Circle = " << a1.area(3);
	 a1.area();
	cout << "Area of Triangle = " << a1.area(3.2,4.5);
}