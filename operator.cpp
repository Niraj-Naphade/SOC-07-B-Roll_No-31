#include <iostream>
using namespace std;
int main() {
	int a = 10, b = 20;
	int num = ++a - b;
	int val = a++ - b;

	cout << "Num = " << num << endl;
        cout << "Val = " << val << endl;

	return 0;
}









