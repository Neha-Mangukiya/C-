#include<stdio.h>
#include<string.h>
//void Creat_new_account();
void tranc();
int main()
{
		int ch;
		printf("\n\n\t\t\t**** CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM ****");
		for(;;)
		{
		printf("\n 1.Creat new account \n 2.tranc \n 3.exit");
		printf("\nenter the choise ::");
		scanf("%d",&ch);
		/*if(ch==1)
		{
			Creat_new_account();
		}*/
		 if(ch==2)
		{
			tranc();
		}
		else if(ch==3)
		break;
		}
}


void tranc()
{
	int ch;
	int total_balance,deposit_money,withdraw_money,total_balance_after_deposit;
	printf("\nEnter your total balance --->");
	scanf("%d",&total_balance);
	printf("\ntotal balance == %d",&total_balance);
	for(;;)
	{
	printf("\n1.deposite money \n 2.withdraw money \n 3.Exit\n");
printf("\nenter your choise::::");
scanf("%d",&ch);
switch(ch)
{
	case 1:
	printf("\nEnter the deposit money --->");
	scanf("%d",&deposit_money);
	printf("\nDeposit money == %d",&deposit_money);
	printf("\n\t\t<----Total balance after deposit money---->");
	total_balance_after_deposit=total_balance + deposit_money;
	printf("\ntotal_balance_after_deposite == %d",&total_balance_after_deposit);
	break;
	
	case 2:
	printf("\nEnter the withdraw money --->");
	scanf("%d",&withdraw_money);
	printf("\nwithdraw money == %d",&withdraw_money);
	printf("\n\t\t<----Total balance after withdraw money---->");
	total_balance=total_balance - withdraw_money;
	printf("total_balance_after_deposite == %d",&total_balance_after_deposit);
	break;
	
	case 3:
		printf("For exit");
		break;
}
}
}
