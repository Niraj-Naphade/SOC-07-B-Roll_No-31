	#include <iostream>
using namespace std ;
class rectangle
{
	int length;
	int breadth;
	public:
	float area;
	float perimeter;
	void display()
	{
		cout << "Enter Length:";
		cin >> length;
		cout << "Enter Breadth:";
		cin >> breadth;
	}
	void area1()
	{
		area = length * breadth;
		cout << "Area of Rectangle whose length = " << length <<"and breadth = " << breadth << "is = " << area << "\n";
	}
	void perimeter1()
	{
		perimeter = 2 * (length + breadth);
		cout << "Perimeter is = " << perimeter << "\n";
	}
};
int main()
{
	rectangle rec;
	rec.display();
	rec.area1();
	rec.perimeter1();
	return 0;
}
