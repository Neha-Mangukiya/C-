//Write a program of Addition, subtraction and multiplication of two numbers using
//Binary Operator overloading with switch case.
#include <iostream>
using namespace std;
class operation{

	public :
	int x,y;

	void getdata()
	{
		cout << "Enter  the value of x and y ::";
		cin >> x >> y;
	}
				operation operator +(operation &o2)
				{
					operation o3;
					o3.x=x+o2.x;
					o3.y=y+o2.y;
					return o3;
					
				}
			
				operation operator -(operation &o2)
				{
					operation o3;
					o3.x=x-o2.x;
					o3.y=y-o2.y;
					return o3;	
				}
				operation operator *(operation &o2)
				{
					operation o3;
					o3.x=x*o2.x;
					o3.y=y*o2.y;
					return o3;
					
				}
	void display()
	{
		cout << "\n x="<<x << "\ny=" <<y;
	}
};

int main()
{
	int ch;
	operation o1;
	o1.getdata();
	operation o2;
	o2.getdata();
	cout << "\n1.Addition \n2.subtraction \n3.multiplication \n4.exit\n";
	cin >> ch;
	operation o3;
	switch(ch)
	{
		case 1: o3=o1+o2;
		cout << "\n Addition =" ;
		o3.display();
		break;

		case 2: o3=o1-o2;
		cout << "\n subtraction =" ;
		o3.display();
		break;

		case 3: o3=o1*o2;
		cout << "\n multiplication =" ;
		o3.display();
		break;

		case 4:
		break;

		default:
		cout << "wrong choice!!";
	}

}












