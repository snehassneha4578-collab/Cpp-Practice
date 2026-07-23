#include<iostream>
using namespace std;

class Employee
{
public:

    int id;

    float salary;

    void show()
    {
        cout<<"ID = "<<id<<endl;
        cout<<"Salary = "<<salary;
    }
};

int main()
{
    Employee e;

    e.id=1001;

    e.salary=45000;

    e.show();

    return 0;
}