//Write a program of Addition of two Matrix using Class.
#include<iostream>
using namespace std;
class addmatrix
{
	int a[2][2],b[2][2],c[2][2],i,j;

public:
     void getdata()
     {
         cout << "enter the array element of a[2][2]:";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "enter the array element of b[2][2]:";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin >> b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
	    for(j=0;j<2;j++)
	    {
	        c[i][j] = a[i][j] + b[i][j];
	    }
	}
	}

	void setdata()
     {
         cout << "first matrix :"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout << "\t " << a[i][j];
		}
		cout << endl;
	}
    cout << "second matrix :" << endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout << "\t " << b[i][j];
		}
		cout << endl;
	}
	cout << "addition of matrix";
	cout << endl;
	for(i=0;i<2;i++)
	{
	    for(j=0;j<2;j++)
	    {
	        cout << "\t" <<c[i][j] ;
	    }
	    cout<<endl;
	}
     }
};
int main()
{
	addmatrix m;
	m.getdata();
	m.setdata();
}