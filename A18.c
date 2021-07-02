/*Create a class person having members name and age. //class A
Derive a class student having member percentage. // class B
 Derive another class teacher having member salary. // class C
 Write necessary member function to initialize, read and write data. 
 Write also Main function (Multiple Inheritance)
*/

#include<iostream>
using namespace std;
class person
{
public:
	void person_info()
	{
		int age;
		char name[20];
		cout << "enter the name and age ::: ";
		cin >> age >> name;
		cout << endl << "Name :: " << name;
		cout << endl << "age :: " << age;
	}
};
class student
{
public:
	void student_marks()
	{
		float s1,s2,s3,sum,percentage;
		cout << endl << "enter marks of three subjects :: ";
		cin >> s1 >> s2 >> s3;
		sum = s1 + s2 + s3;
		percentage = sum /3 ; 
		cout << endl << "sum :: " << sum;
		cout << endl << "percentage :: " << percentage;
	}
};
