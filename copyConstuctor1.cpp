#include<iostream>
using namespace std;

class Student
{
public:

    int marks;

    Student(int m)
    {
        marks=m;
    }

    Student(const Student &s)
    {
        marks=s.marks;
    }
};

int main()
{
    Student s1(90);

    Student s2=s1;

    cout<<"Student 1 Marks = "<<s1.marks<<endl;
    cout<<"Student 2 Marks = "<<s2.marks;

    return 0;
}

