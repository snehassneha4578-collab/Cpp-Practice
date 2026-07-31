#include<iostream>
using namespace std;

class Animal
{
public:

    virtual void display()
    {
        cout<<"Animal";
    }
};

class Dog : public Animal
{
public:

    void display()
    {
        cout<<"Dog";
    }
};

int main()
{
    Animal *ptr;

    Dog d;

    ptr=&d;

    ptr->display();

    return 0;
}

