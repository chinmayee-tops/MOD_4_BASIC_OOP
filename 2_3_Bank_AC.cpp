/*
Define a class to represent a bank account. Include the following members:
Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

Member Functions:
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance

*/
#include <iostream>
#include<string.h>
using namespace std;

class Bank
{
	char dname[30];
	long int accno;
	char actype[10];
	float bal;
	
	public :
			void SetData()
			{
				strcpy(dname,"Mr.Shukla");
				accno=8877665433;
				strcpy(actype,"Current");
				bal=20000;
			}
			
			void Deposite()
			{
				int damt1;
        		cout<<"\n\n\t Enter Deposit Amount = ";
        		cin>>damt1;
        		bal+=damt1;	
			}
			
			void Withdraw()
			{
				 int wamt1;
        		cout<<"\n\n\t Enter Withdraw Amount = ";
        		cin>>wamt1;
        		if(wamt1>bal)
                		cout<<"\n\n\t Cannot Withdraw Amount";
        		bal-=wamt1;
			}
			
			void PrintData()
			{
				cout<<"\n\n\t ----------------------";
        		cout<<"\n\n\t Accout No. : "<<accno;
        		cout<<"\n\n\t Name : "<<dname;
        		cout<<"\n\n\t Account Type : "<<actype;
        		cout<<"\n\n\t Balance : "<<bal;  
			}
};

main()
{
	Bank B;
	B.SetData();
	B.PrintData();
	B.Deposite();
	B.PrintData();
	B.Withdraw();
	B.PrintData();
	
}
