/*  Assume a class cricketer is declared. Declare a derived class batsman from
cricketer .Data member of batsman. Total runs, Average runs and best performance. 
Member functions input data, calculate average runs, Display data. (Single Inheritance)
*/
#include<iostream>
using namespace std;
class cricketer{
			public:
				//int x,y;
				char country[20],player_name[20];
				void cricket()
				{
				cout << "enter the country name and player_name ::::";
				cin >> country >> player_name ;
			}
};
class batsman : public cricketer{
			public:
				void batsman_preformance()
				{
				int runs,inns , best_performance;
				float average_runs;
				cout <<endl << "enter the total runs and best_performance and inns ::: ";
				cin >> runs >> best_performance >> inns;
				average_runs = (float)runs /(float)inns  ;
				cout << endl << "country :::" << country;
				cout << endl << "player_name :::" << player_name;
				cout << endl << "Total runs == " << runs;
				cout << endl << "best_performance == " << best_performance;
				cout << endl << "average_runs == " << average_runs;
				}
};
int main()
{
	batsman b1;
	b1.cricket();
	b1.batsman_preformance();
}