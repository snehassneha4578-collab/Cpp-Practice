#include<iostream>
using namespace std;

class Person
{
public:

    void showPerson()
    {
        cout<<"Person Details"<<endl;
    }
};

class Student : public Person
{
public:

    void showStudent()
    {
        cout<<"Student Details";
    }
};

int main()
{
    Student s;

    s.showPerson();

    s.showStudent();

    return 0;
}

