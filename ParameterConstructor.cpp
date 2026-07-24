#include<iostream>
using namespace std;

class Student
{
public:

    int id;

    Student(int x)
    {
        id=x;
    }

    void display()
    {
        cout<<"ID = "<<id;
    }
};

int main()
{
    Student s(101);

    s.display();

    return 0;
}

