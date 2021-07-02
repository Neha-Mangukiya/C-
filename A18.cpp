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
		cin >> name >> age;
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
class salary : public person , public student{
public:
	void teacher_info()
	{
		char name[20];
		int salary;
		cout << endl << "enter the techer name and salary ::";
		cin >> name >> salary;
		cout << endl << "name :: " << name;
		cout << endl << "salary :: " << salary;
			}
};
int main()
{
	salary s1;
	s1.person_info();
	s1.student_marks();
	s1.teacher_info();
}