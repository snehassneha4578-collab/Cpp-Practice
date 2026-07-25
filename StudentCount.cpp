#include<iostream>
using namespace std;

class Student
{
public:

    static int count;
};

int Student::count=0;

int main()
{
    Student::count=5;

    cout<<Student::count;

    return 0;
}

