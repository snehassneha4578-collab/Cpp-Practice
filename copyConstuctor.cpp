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

    Student(const Student &obj)
    {
        id=obj.id;
    }

    void display()
    {
        cout<<"ID = "<<id;
    }
};

int main()
{
    Student s1(101);

    Student s2=s1;

    s2.display();

    return 0;
}