#include <iostream>
using namespace std;
class employee
{

	float salary;
	string Name;
public:

	void getInfo()
	{
		cout <<"Enter Salary:";
		cin >> salary;

		cout <<"Employee Name:";
		cin >> Name;
	}
	
	void printInfo()
	{
		cout <<"Salary:" << salary <<"\n";
		cout <<"Name:" << Name << "\n";
	}
};

int main()
{
	employee stud;
	stud.getInfo();
	stud.printInfo();
	
	return 0;
}
