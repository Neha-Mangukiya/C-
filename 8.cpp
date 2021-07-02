/* Write a program of to display in this format using class  
Roll No  Sub1   Sub2   Sub3   total
1        30      25     45      100
2        25      20     25      70
3        20      15     35      70
4        35      30     40      105
   */
#include<iostream>
using namespace std;
class marks{
    int total,i;
    int sub1[4],sub2[4],sub3[4],rollno[4];

    public:

    void getdata()
    {
        for(i=1;i<=4;i++)
        {
        cout << "enter the 1roll no -- 2.sub1 marks -- 3.sub2 marks -- 4.sub3 marks : ";
        cin >> rollno[i] >> sub1[i] >> sub2[i] >> sub3[i] ; 
        }
    }

    void setdata()
    {
        for(i=1;i<=4;i++)
        {
        cout << endl << "roll no ==  " << rollno[i];
        cout << "\t" << "sub1 marks ==  " << sub1[i];
        cout << "\t" << "sub2 marks ==  " << sub2[i];
        cout << "\t" << "sub3 marks ==  " << sub3[i];
        cout<<"\t" << "total ==  " <<sub1[i]+sub2[i]+sub3[i];
        }
     }
};
int main()
{
    marks m1;
    m1.getdata();
    m1.setdata();
}