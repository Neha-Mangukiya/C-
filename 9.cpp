//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class operation{
    int add,mul,x,y;
    float div,sub;
    
    public:
     operation(int a , int b){
         x=a;
         y=b;
         add = a+b;
         sub = a-b;
         mul = a*b;
         div = (float)a / (float)b;
     }

     void display()
     {
         cout << endl << "addition = " << add;
         cout << endl << "substraction = " << sub;
         cout << endl << "multiplication = " << mul;
         cout << endl << "division = " << div;
     }
};
int main()
{
    //operation o;
    int x,y;
    cout << "enter the value of a and b :";
    cin >> x >> y;
    operation *o1=new operation(x,y);
    o1->display();
}