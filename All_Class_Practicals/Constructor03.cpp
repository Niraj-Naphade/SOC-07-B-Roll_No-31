#include<iostream>
using namespace std;
class Number
{
	private:
		int num;
	public:
		Number()
		{	
			num=10;
		}
void display()
{
	cout<< "Number : " <<num << "\n";
}
};
int main()
{
	Number n;
	n.display();
}
	
