#include <iostream>
using namespace std;
void studentInfo();
int main ()
{
studentInfo();
return 0;
}
void studentInfo(){

int RollNo;
string Name;

	cout <<"Enter Roll No.:";
	cin >> RollNo;
	cout <<"Enter Name:";
	cin >> Name;

	cout <<"Roll No.:" << RollNo<<"\n";
	cout <<"Name:" << Name << "\n";

}



