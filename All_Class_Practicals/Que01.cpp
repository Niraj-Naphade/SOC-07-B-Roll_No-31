#include<iostream>
using namespace std;

int main()
{
	int RollNo;
	cout << "Enter Roll No.:" ;
	cin >> RollNo;
	cout << "Roll No.:" << RollNo << "\n";
	
	string Name;
	cout << "Enter Name:" ;
	cin >> Name ;
	cout << "Name:" << Name << "\n" ;

	float CGPA;
	cout << "Enter CGPA:" ;
	cin >> CGPA;
	cout << "CGPA:" << CGPA << "\n" ;
	
	char Grade;
	cout << "Enter Grade:" ;
	cin >> Grade;
	cout << "Grade:" << Grade << "\n" ;
	
	bool Result;
	

if(CGPA >=5) 
{
	Result ="Pass";
	cout << "Result:" << Result << "\n" ;
}

else
{
	Result = "Fail";
	cout << "Result:" << Result << "\n" ;
}
return 0;

}
