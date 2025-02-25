//2. Define a class to represent a bank account. Include the following members:
//3. Data Member:
/*-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/

#include<iostream>
using namespace std;
class Bank_account
{
   private:
   	       string name;
           double acc_no;
           string acc_type;
           double balance;   
   public :
		void set(double a,double b,string acc,string n)
		{
			acc_no = a;
			balance = b;
			acc_type=acc;
			name=n;
		}
		void deposit(double amount)
		{
			cout<<"\n"<<amount<<" Rs. credited";
			balance = balance + amount;
		}
		void withdraw(double amount)
		{
			if(balance>amount)
			{
				cout<<"\n"<<amount<<" Rs. debited";
				balance = balance - amount;
			}
			else
			{
				cout<<"\nYour account balance is = "<<balance;
				cout<<"\nYou can not withdraw "<<amount;
			}
		}
		void get()
		{
			cout<<"\n Name Of Depositor:"<<name;
			cout<<"\n Account Type:"<<acc_type;
			cout<<"\nCurrent balance = "<<balance;
		}
};
int main()
{
	Bank_account b1;
	b1.set(123456,10000,"Saving_account","Bhavana");
	b1.deposit(5000);
	b1.withdraw(10000);
	b1.get();
	return 0;
}
