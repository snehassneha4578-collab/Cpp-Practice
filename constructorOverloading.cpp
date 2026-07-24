#include<iostream>
using namespace std;

class Student
{
public:

    Student()
    {
        cout<<"Default Constructor"<<endl;
    }

    Student(int x)
    {
        cout<<"Parameterized Constructor"<<endl;
    }
};

int main()
{
    Student s1;

    Student s2(100);

    return 0;
}