#include<iostream>
using namespace std;

class Employee
{
public:

    virtual void work()=0;
};

class Manager : public Employee
{
public:

    void work()
    {
        cout<<"Manager is working";
    }
};

int main()
{
    Manager m;

    m.work();

    return 0;
}
