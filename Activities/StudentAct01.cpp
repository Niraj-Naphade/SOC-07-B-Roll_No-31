#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    void input()
    {
        float subject1, subject2, subject3, subject4, subject5;

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter marks for Subject 1: ";
        cin >> subject1;

        cout << "Enter marks for Subject 2: ";
        cin >> subject2;

        cout << "Enter marks for Subject 3: ";
        cin >> subject3;

        cout << "Enter marks for Subject 4: ";
        cin >> subject4;

        cout << "Enter marks for Subject 5: ";
        cin >> subject5;

        marks = (subject1 + subject2 + subject3 + subject4 + subject5) / 5;
    }

    float calculateAverage()
    {
        return marks;
    }

    void display()
    {
        cout << "Student Details" << "\n";
        cout << "Roll Number: " << rollNo << "\n";
        cout << "Name: " << name << "\n";
        cout << "Average Marks: " << calculateAverage() << "\n";
    }
};

int main()
{
    Student student1;

    student1.input();
    student1.display();

    return 0;
}