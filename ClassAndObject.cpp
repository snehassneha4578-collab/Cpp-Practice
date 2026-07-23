
#include<iostream>
using namespace std;

class Student
{
public:

    int id;

    char name[20];

    void display()
    {
        cout<<"ID = "<<id<<endl;
        cout<<"Name = "<<name;
    }
};

int main()
{
    Student s;

    s.id=101;

    strcpy(s.name,"Sneha");

    s.display();

    return 0;
}
