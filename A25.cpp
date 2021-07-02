//Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;
class Max
{
	int x,y;
public:
	void input()
	{
		cout << "Enter the two numbers :: ";
		cin >> x >> y;
	}
	friend void largest(Max );
};

void largest(Max m1)
{
	if(m1.x>m1.y)
	{
		cout << "largest is ::" << m1.x;
	}
	else
	{
		cout << "largest is ::" << m1.y;
	}
}

int main()
{
	Max m1;
	m1.input();
	largest(m1);
}