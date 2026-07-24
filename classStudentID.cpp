#include<iostream>
#include<cstring>
using namespace std;

class Student
{
public:

    int id;
    char name[20];

    Student(int i,const char n[])
    {
        id=i;

        strcpy(name,n);
    }

    void display()
    {
        cout<<"ID = "<<id<<endl;
        cout<<"Name = "<<name;
    }
};

int main()
{
    Student s(101,"Sneha");

    s.display();

    return 0;
}
