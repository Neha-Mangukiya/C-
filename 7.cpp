/* Define a class to represent lecture details. Include the following members and the 
program should handle details of 5 lecturer.
Data members
Name of the lecturer Name of the subject Name of course Number of lecturers Data functions
To assign initial values to add a lecture
details to display name and lecture details
*/
#include<iostream>
using namespace std;
class lecture{
	//member of data  1.faculty_name 2.subject_name 
	char faculty_name[5][50],subject_name[5][50];
	int i;
	//member of function...
	public:
		void getdata()
		{
			for(i=0;i<5;i++)
			{
			cout << "enter the details 1.faculty_name \n 2.subject_name \n";
			cin >>  faculty_name[i] >> subject_name[i] ;
			cout << endl << "faculty_name==" << faculty_name[i] << "\t subject_name==" << subject_name[i];
			}
		}
		
		void setdata()
		{
			for(i=0;i<5;i++)
			{
			cout << endl << "faculty_name==" << faculty_name[i] << "\t subject_name==" << subject_name[i];

			}
		}
};
int main()
{
	lecture l;
	l.getdata();
	l.setdata();
}
