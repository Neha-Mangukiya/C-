/*Write a program of find the simple interest using constructor with dynamic initialization.
Make constructor like Interest (int principal, int year, int rate) Interest (int
principal, int year, float rate = 2.5) 
I = P * R * T;
*/
#include<iostream>
using namespace std;
class simple_interest{
    float principal , rate , interest;
    int year,x,y,z;
    
    public:
     simple_interest(float principal , float rate , int year ){
         x=principal;
         y=rate;
         z=year;
         interest = principal * rate * year ;
     }

     void display()
     {
         cout << endl << "simple interest = " << interest ;
        
     }
};
int main()
{
    int x,y,z;
    simple_interest *si = new simple_interest(1000,2.5,5);
    si->display();
}