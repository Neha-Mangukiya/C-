//Write a program of concatenate the two strings using Operator Overloading
#include <iostream>
#include<string.h>
using namespace std;
class concate{
			public:
			char str1[50];
			void gets()
			{
				cin >> str1;
			}
			concate operator +(concate &s)

			{
				concate s3;
				strcat(str1,s.str1);
				strcpy(s3.str1,str1);
				return s3;
			}
			void display()
			{
				cout << "\n" << this -> str1;	
			}
			
};
int main()
{
	
	concate s1;
	concate s2;
	s1.gets();
	s2.gets();
	concate s3=s1+s2;
	s3.display();

}