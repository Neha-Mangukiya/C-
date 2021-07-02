/*Assume that a bank maintains two kinds of accounts for customer, one called
as saving account and other as current accounts provides Simple interest and withdraw facilities
but no cheque book facility. The current account provides cheque book facility but no interest. 
Current account holders should maintain a minimum balance and if the balance falls below this level a
 service charges is imposed*/

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

class diposite_withdraw{

public:

	void getdata()
	{
				while(d.ch!=3)
		{
				cout << "\n1.diposit \n2.withdraw \n3.exit";
				cout << "\n enter your choice ::";
				cin >> d.ch;
				switch(d.ch)
				{
					case 1:
					cout << "\n Enter the diposite ammount ::";
					cin >> transection.ammount;
					d.amount +=transection.ammount
					
					break;

					case 2:
					cout << "\n Enter the withdraw ammount :: ";
					cin >> transection.ammount;
					d.ammount -=transection.ammount;

					
					break;

					case 3:
					break;
				}
		}
	}
};





int main()
{
	Account a1,a2;
	diposite_withdraw d1;
	int ch;
	while(ch!=3)
	{
		cout << "\n1.new accoount \n2.Deposite or withdraw \n3.Exit";
		cout << "\n Enter your chioce :";
		cin >> ch;

		switch(ch)
		{
			case 1:
			a1.getdata();
			a1.store_data();
			break;

			case 2:
			d1.getdata();
			break;
		}
	}
}




/*class acc_current : public Account
{
public:
	float time;
    float intrst;
    int rate;
	float interest(float t,float amount,int rate)
		{
    		float SI;
    		SI=(rate*t*amount)/100.0;
    		return (SI);
		}
	void current()
	{
		time = 1.0;
	rate = 2;
	intrst=interest(time,ammount,rate);
	cout << "\n intrst =" << intrst;
	}
	


};*/
