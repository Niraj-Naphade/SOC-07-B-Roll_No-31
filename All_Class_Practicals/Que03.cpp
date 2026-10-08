#include<iostream>
using namespace std;
class bankaccount
{
	string name;
	float balance;
	float deposit;
	float amount;
	public:
	
	void getInfo()
	{
		cout << "Bank Holder Name:" << "\n";
		cin >> name;
		cout << "Balance:" << "\n";
		cin >> balance;
	}
	void printInfo()
	{
		cout << "Bank Holder Name Is:" << name << "\n";
		cout << "Balance Is:" << balance << "\n";
	}
	void deposit1()
	{
		if (balance>0)
		{
			balance = balance + deposit;
			cout << "Amount Deposited Successfully!! Now Your Current Balance Is:" << balance << "\n";
		}
		else
		{
			cout << "Amount Deposit Failed!! Your Current Balance is:" << balance << "\n";
		}
	}
	void withdraw1()
	{
		if (amount > 0 && balance >= amount)
		{
			balance = balance - amount;
			cout << "Your Amount Is Withdrawn Successfully!! Your Current Balance Is:" << balance << "\n";
		}
		else
		{
			cout << "You Dont Have Enough Balance" << balance << "\n";
		}
	}
			
		
};

int main()
{
	bankaccount b;
	b.getInfo();
	b.printInfo();
	b.deposit1();
	b.withdraw1();
	return 0;
}
	
	


