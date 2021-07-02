/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
*/
#include <iostream>
using namespace std;
class basic_operation
{
	public:
		int operation(int a)
		{
			int b,c;
			cout << "Enter the value of b ::";
			cin >> b;
			c=a+b;
			return c;
		}

		void operation(float a,float b)
		{
			int c;
			c=a-b;
			cout << "\nSubtraction = " << c;
		}

		 int operation(int a,int b,int c)
		{
			c=a*b;
			return c;
		}
		void operation()
		{
			float a,b,c;
			cout << "\nEnter the value of 'a' and 'b' :: ";
			cin >> a >> b;
			c=a/b;
			cout << "\nDivision = " << c;
		}
};

int main()
{
	basic_operation o1;
	cout << "\nAddition =" << o1.operation(2);
	o1.operation(2.3,3.4);
	cout << "\nMultiplication = " << o1.operation(2,3,3);
	o1.operation();
}






