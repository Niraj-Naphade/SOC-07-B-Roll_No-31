#include <iostream>
using namespace std;
class maths
{
	float Num1;
	float Num2;
	public:
	float addition;
	float substraction;
	float multiplication;
	float division;
	void display()
	{
		cout << "Enter Number 1 : ";
		cin >> Num1;
		cout << "Enter Number 2 : ";
		cin >> Num2;
	}
	void addition1()
	{
		addition = Num1 + Num2;
		cout << "Addition Is : " << addition << "\n";
	}
	void substraction1()
	{
		substraction = Num1 - Num2;
		cout << "Subtraction Is : " << substraction << "\n";
	}
	void multiplication1()
	{
		multiplication = Num1 * Num2;
		cout << "Multiplication Is : " << multiplication << "\n";
	}
	void division1()
	{
		division = Num1 / Num2;
		cout << "Division Is : " << division << "\n";
	}
};
int main()
{
	maths m;
	m.display();
	m.addition1();
	m.substraction1();
	m.multiplication1();
	m.division1();
	return 0;
}

