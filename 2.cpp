//Write a program to Addition, Subtraction, Multiplication, and Division of two numbers using Class
#include<iostream>
using namespace std;
class operation
{
	//member of data
	int a,b,add,mul;
	float divi,sub;
	public:
	//member of function
	void getdata()
	{
		cout << "enter the value of a and b : " ;
		cin >> a >> b ;
		add = a+b;
		sub = a-b;
		mul = a*b;
		divi = (float)a/(float)b;
	}
	void setdata()
	{
		cout << endl << "Addition = " << add;
		cout << endl << "Subtraction = " << sub;
		cout << endl << "Multiplication = " << mul;
		cout << endl << "Division = " << divi;
	}
};
int main()
{
	operation o;
	o.getdata();
	o.setdata();
}