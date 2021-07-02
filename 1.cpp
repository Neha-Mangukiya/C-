//Write a program of Fibonacci and factorial using Class....
// fibonacci........
#include<iostream>
using namespace std;
class fibo
{
	//member of data
	int n,t1,t2,next,i;

	//member of structure
public:
	void getdata()
	{
		cout << "enter the value of n , t1 , t2 :";
		cin >> n >> t1 >> t2;
		for (i=0;i<=n;i++)
		{
			cout << "," << t1;
			next = t1+ t2;
			t1 = t2;
			t2 = next;
		}
	}
};
int main()
{
	fibo f1;
	f1.getdata();
}