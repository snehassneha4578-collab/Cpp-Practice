/* The this pointer is a special pointer that points to the current object.

*/
#include<iostream>
using namespace std;

class Student
{
public:

    int id;

    void setId(int id)
    {
        this->id=id;
    }

    void display()
    {
        cout<<"ID = "<<id;
    }
};

int main()
{
    Student s;

    s.setId(101);

    s.display();

    return 0;
}
