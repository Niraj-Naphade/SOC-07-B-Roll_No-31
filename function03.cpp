#include <iostream>
using namespace std;
class student{

int RollNo;
string Name;
public:

void getInfo(){
	cout <<"Enter Roll No.:";
	cin >> RollNo;
	cout <<"Enter Name:";
	cin >> Name;
	}
	
void printInfo(){
	cout <<"Roll No.:" << RollNo<<"\n";
	cout <<"Name:" << Name << "\n";
}
};

int main(){
	student stud;
	stud.getInfo();
	stud.printInfo();
return 0;
}
