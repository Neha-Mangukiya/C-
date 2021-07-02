//Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;
class Matrix{
		public:
			int a[2],add[2],i;
			void getdata()
			{
				for(i=0;i<=1;i++)
				{
					cin >> a[i];
				}
			}
			Matrix operator +(Matrix &m2)
			{
				Matrix m3;
				for(i=0;i<=1;i++)
				{
					m3.a[i] = a[i] + m2.a[i];
				}
				return m3;
			}
			void display()
			{
				for(i=0;i<=1;i++)
				{
					cout << "  " << a[i];
				}
			}
};
int main()
{
	Matrix m1;
	cout << "\nenter the Matrix ::";
	m1.getdata();
	m1.display();
	cout << "\nEnter the second Matrix ::";
	Matrix m2;
	m2.getdata();
	m2.display();
	Matrix m3=m1+m2;
	m3.display();
}