#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
struct data{
	int acc_no,ch;
	float ammount;
	long int phone;
	char name[20],acc_type[20];
};

struct data d,transection;

class Account
{
public:
	
	void getdata()
	{
		cout << "\nEnter the Account number :";
		cin >> d.acc_no;
		cout << "\nEnter the name :";
		cin >> d.name;
		cout << "\nEnter the phone number :";
		cin >> d.phone;
		cout << "\nEnter the account type :";
		cin >> d.acc_type;
	}

	int store_data()
	{
	fstream f1;
	f1.open("data.text",ios::app);
	f1 << "\n"<<d.acc_no;
	f1 << d.name;
	f1 << d.phone;
	f1 << d.acc_type;
	f1.close();
	return 0;
	}
};

class show_data :: public Account
{
		fstream f1;
		f1.open("data.text",ios::app);
		while(!f1.eof())
			{
				f1 >> d.acc_no >> d.name >> d.phone >> d.acc_type;
			}
			f1.close()
};
int main()
{
	Account a1,a2;
	//diposite_withdraw d1;
	int ch;
	while(ch!=3)
	{
		cout << "\n1.new accoount \n2.display data \n3.Exit";
		cout << "\n Enter your chioce :";
		cin >> ch;

		switch(ch)
		{
			case 1:
			a1.getdata();
			a1.store_data();
			break;

			case 2:
			
			break;
		}
	}
	
}