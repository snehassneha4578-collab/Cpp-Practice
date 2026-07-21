#include<iostream>
using namespace std;

struct Student
{
    int id;
    float cgpa;
};

void display(Student s)
{
    cout<<"ID = "<<s.id<<endl;
    cout<<"CGPA = "<<s.cgpa;
}

int main()
{
    Student s1={101,8.6};

    display(s1);

    return 0;
}
