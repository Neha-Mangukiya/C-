#include<iostream>
using namespace std;
class book{
	char name_author[50] , name_title[50] , name_publisher[50] ;
	int price;
	
	public:
		
		void getdata()
		{
			cout << "enter the 1.name_author--2.name_title--3.name_publisher--4.price--> ";
			cin >> name_author >> name_title >> name_publisher >> price;
		}
		
		void setdata()
		{
			cout << endl << "name_author==" << name_author;
			cout << endl << "name_title=="  << name_title;
			cout << endl << "name_publisher==" << name_publisher;
			cout << endl << "price==" << price;
		}
};
main()
{
	book b;
	b.getdata();
	b.setdata();
}
