/*Assume that the test results of a batch of students are stored in three different classes. 
Class Students are stores the roll number. // class student
Class Test stores the marks obtained in two subjects and // class test
class result contains the total marks obtained in the test.   // class sum
The class result can inherit the details of the marks obtained in the test and roll number of students.
(Multilevel inheritance)
*/
#include<iostream>
using namespace std;
class student{
		public:
			int rollno;
			void student_rollno()
			{
				cout << "enter the roll no :: ";
				cin >> rollno;
			}
};

class test : public student{
		public:
			int s1,s2;
			void marks()
			{
				cout << "enter the marks of two subjects :: ";
				cin >> s1 >> s2;
			}
};
class result : public test{
		public:
			int total;
			void sum()
			{
			  total = s1 +s2;
			  cout << endl << endl << "rollno :: " << rollno;
			  cout << endl << "subject_marks 1  :: " << s1 << endl<<"subject_marks 2  :: "<< s2 ;
			  cout << endl << "total :: " << total;
			}
};
int main()
{
	result r1[2];
	int i;
	for(i=0;i<2;i++)
	{
		r1[i].student_rollno();
	}
	for(i=0;i<2;i++)
	{
		r1[i].marks();
	}
	for(i=0;i<2;i++)
	{
		r1[i].sum();
	}
}