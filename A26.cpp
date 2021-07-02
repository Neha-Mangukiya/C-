//Write a program to swap the two numbers using friend function
#include<iostream>
using namespace std;
class Swap{
	int a,b,c;
		public:
			void input()
			{
				cout << "enter the two numbers :: ";
				cin >> a >> b;
			}
			friend void swap_num(Swap);
};

void swap_num(Swap s1)
{
	s1.c=s1.a+s1.b;
	s1.a=s1.c-s1.a;
	s1.b=s1.c-s1.b;
	cout << "\na=" << s1.a;
	cout << "\nb=" << s1.b;
}

int main()
{
	Swap s1;
	s1.input();
	swap_num(s1);
}