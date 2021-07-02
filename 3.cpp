//Write a program of to display a matrix using class...
#include<iostream>
using namespace std;
class matrix
{
	int a[2][2],i,j;

public:
     void getdata()
     {
         cout << "enter the array element :";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin >> a[i][j];
		}
	}
	}

	void setdata()
     {
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout << "\t " << a[i][j];
		}
		cout << endl;
	}
	}	
};
int main()
{
	matrix m;
	m.getdata();
	m.setdata();
}