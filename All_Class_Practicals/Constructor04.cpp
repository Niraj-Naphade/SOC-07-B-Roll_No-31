#include <iostream>
using namespace std;
class Student
{
	private:
		int age;
	public:
		Student(int a)
		{
			age = a;
		}
	void display()
	{
		cout << "Age : " << age << "\n";
	}
};
int main()
{
	Student s(18);
	s.display();
	return 0;
}
