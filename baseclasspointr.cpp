#include<iostream>
using namespace std;

class Animal
{
public:

    void show()
    {
        cout<<"Animal";
    }
};

class Dog : public Animal
{

};

int main()
{
    Animal *ptr;

    Dog d;

    ptr=&d;

    ptr->show();

    return 0;
}
