#include<iostream>
using namespace std;

class Person
{
public:

    void display()
    {
        cout<<"Person";
    }
};

class Student : public Person
{

};

int main()
{
    Student s;

    s.display();

    return 0;
}
