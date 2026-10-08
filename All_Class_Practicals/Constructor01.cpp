#include <iostream>
using namespace std;
class Student
{
	private:
		int age;
	public:
		Student()
		{
			age = 18;
		}
	void display()
	{
		cout << "Age : " << age << "\n";
	}
};
int main()
{
	Student s;
	s.display();
	return 0;
}
