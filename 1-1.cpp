//Write a program of Fibonacci and factorial using Class....
//factorial......
#include<iostream>
using namespace std;
class fact
{
	int n,i,j;
	public:
		void getdata()
		{
			cout << "enter the value of n , i , j";
			cin >> n >> i >> j;
			while(i<=n)
			{
				j=j*i;
				i++;
			}
		}
		void setdata()
		{
			cout << "fact of given number is =" << j;
		}
};
int main()
{
	fact f;
	f.getdata();
	f.setdata();
}