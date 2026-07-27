#include<iostream>
using namespace std;

class Parent
{
public:

    void show()
    {
        cout<<"Parent";
    }
};

class Child : private Parent
{
public:

    void access()
    {
        show();
    }
};

int main()
{
    Child c;

    c.access();

    return 0;
}

