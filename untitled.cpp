#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class function
{
	void Add_Item_in_Stock();
	void Show_Item_List();
};

void function :: Add_Item_in_Stock()
{
		int id,price,quantity;
		char name[20],c_name[20],a_date[20],e_date[20];
		
		void getdata()
		{
			cout << "\nID :";
			cin >> id;
			cout << "\nMedicine Name :";
			cin >> name;
			cout << "\nCampany Nmane :";
			cin >> c_name;
			cout << "\n Arrival Date :";
			cin >> a_date;
			cout << "\nExpire Dtae :";
			cin >> e_date;
			cout << "\nPrice :";
			cin >> price;
			cout << "\nQuantity :";
			cin >> quantity;
		}

		void store_data();
		//f1 << id << name << c_name << a_date << e_date << price << quantity

}

void function :: store_data()
{
		fstream f1;
		f1.open("data.text",ios::app);
		f1 << id;
		f1 << name;
		f1 << c_name;
		f1 << a_date;
		f1 << price ;
		f1 << quantity;
		f1.close();
}
int main()
{
	int ch;
	while(ch!=2)
	{
		cout << "\nWelcome to Pharmacy Management System !!";
		cout << "\n1.Add Item in Stock \n2.Show Item List \n3.Exit";
		cout << "\nEnter your choice :";
		cin >> ch;
		switch(ch)
		{
			case 1:
			Add_Item_in_Stock();
			break;

			case 2:
			Show_Item_List();
			break;

			case 3:
			break;
		}
	}
}