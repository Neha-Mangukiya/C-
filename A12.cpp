//Write a program to find the multiplication values and the cubic values using inline function.
#include<iostream>
using namespace std;
class mul{
		public:
			float x,y,z,a,b;
	inline int multiplication()
	{
			
			cout << "Enter the value of x and y ::";
			cin >> x >> y;
			z=x*y;
			return z;
	}

	inline int cubic()
	{	
		cout << "Enter the value of a ::";
		cin >> a;
		b= a*a*a;
		return b;
	}
	void diaplay()
	{
		cout << "\nmultiplication =" << z;
		cout << "\ncubic =" << b;
	}
};

int main()
{
	mul m1;
	m1.multiplication();
	m1.cubic();
	m1.diaplay();
}