#include<iostream>
#include<time.h>
using namespace std;

class Atm
{
	public:
	time_t t=time(NULL);
	char *today=ctime(&t);
	int ch1,ch2;
	long int balance=20000;
	long int c_deposit,c_withdraw;
		
	Atm()
	{
		cout<<"\n==================== WELCOME TO ATM ====================\n";
		cout<<"\n       -----------------------------------------        \n"; 
		cout<<"\n       Current Date : "<<today;
		cout<<"\n       -----------------------------------------        \n";
		cout<<"\n========================================================\n";	
		cout<<"\nPress 1 And Then Press Enter To Access Your Account Via Pin Number\n";
		cout<<"\n                          Or                            \n";
		cout<<"\nPress 0 And Press Enter To Get Help.\n\n";
		cin>>ch1;
	}
	
	void access();
	void deposit();
	void withdraw();
	void statement();
	void exit();
};

void Atm::access()
{
	int pin;
	
	if (ch1 == 1)
	{
		cout<<"\n==================== ATM ACCOUNT ACCESS ====================\n";
		cout<<"\nEnter Your Acc Pin Access Number! [Only one attempt is allowed]\n";
		cout<<"\n============================================================\n\n";
		cin>>pin;
		if(pin == 12345)
		{
			cout<<"\n==================== ATM Main Menu Screen ====================\n";
			cout<<"\nEnter [1] To Deposite Cash\n";
			cout<<"\nEnter [2] To Withdraw Cash\n";
			cout<<"\nEnter [3] To Balance Inquire\n";
			cout<<"\nEnter [0] To Exit ATM\n";
			cout<<"\nPLEASE ENTER A SELECTION AND PRESS RETURN KEY: \n\n";
			cin>>ch2;	
		}
		else
		{
			cout<<"\n==================== THANK YOU ====================\n";
			cout<<"\nYou had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n";
		}
	}
	else if(ch1 == 0)
	{
		cout<<"\n==================== ATM ACCOUNT STATUS ====================\n";
		cout<<"\nYou must have the correct pin number to access this account. see your\n";
		cout<<"\nbank representative for assistance during bank opening hours\n";
		cout<<"\nThanks for, Your Choice today!!\n";
	}
}

void Atm::deposit()
{
	if(ch2 == 1)
	{
		cout<<"\n==================== ATM ACCOUNT DEPOSIT SYSTEM ====================\n";
		cout<<"\nThe Name of the Account Holders are :Rakesh Kharva\n";
		cout<<"\nThe Account Holders' Address is :Mumbai\n";
		cout<<"\nThe Branch Location is :Andheri\n";
		cout<<"\nAccount Number: 5678\n";
		cout<<"\n============================================================\n";
		cout<<"\nPresent Available Balance :Rs. 20000\n";
		cout<<"\nEnter the Amount to be Deposited: \n";
		cin>>c_deposit;
		balance=balance+c_deposit;
		cout<<"\nYour new available Balanced Amount is Rs. "<<balance<<"\n";
		cout<<"\nThank You!\n";
	}
}

void Atm::withdraw()
{
	if(ch2 == 2)
	{
		cout<<"\n==================== ATM ACCOUNT WITHDRAWAL ====================\n";
		cout<<"\nThe Name of the Account Holders are :Rakesh Kharva\n";
		cout<<"\nThe Account Holders' Address is :Mumbai\n";
		cout<<"\nThe Branch Location is :Andheri\n";
		cout<<"\nAccount Number: 5678\n";
		cout<<"\n============================================================\n";
		cout<<"\nEnter the Amount to be Withdraw:\n";
		cin>>c_withdraw;
		if(c_withdraw <= balance)
		{
			balance=balance-c_withdraw;
			cout<<"\nYour new available Balanced Amount is Rs. "<<balance<<"\n";
		}
		else
		{
			cout<<"\nInsufficient Available Balance in Your Account.\n";
			cout<<"\nSorry !!\n";
		}	
	}
}

void Atm::statement()
{
	if(ch2 == 3)
	{
		cout<<"\n==================== ATM ACCOUNT WITHDRAWAL ====================\n";
		cout<<"\nThe Name of the Account Holders are :Rakesh Kharva\n";
		cout<<"\nThe Account Holders' Address is :Mumbai\n";
		cout<<"\nThe Branch Location is :Andheri\n";
		cout<<"\nAccount Number: 5678\n";
		cout<<"\n============================================================\n";
		cout<<"\nBalanced Amount in Your Account is Rs. "<<balance<<"\n";
	}
}

void Atm::exit()
{
	if(ch2 == 0)
	{
		exit();
	}
}

main()
{
	Atm at;
	at.access();
	at.deposit();
	at.withdraw();
	at.statement();
	at.exit();
}


