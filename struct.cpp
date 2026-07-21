#include<iostream>
using namespace std;

struct Student
{
    int id;
    char name[30];
    float cgpa;
};

int main()
{
    Student s1={101,"Sneha",8.6};

    cout<<"ID = "<<s1.id<<endl;
    cout<<"Name = "<<s1.name<<endl;
    cout<<"CGPA = "<<s1.cgpa;

    return 0;
}
