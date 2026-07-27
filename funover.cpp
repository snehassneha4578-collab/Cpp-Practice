#include<iostream>
using namespace std;

class Animal
{
public:

    void sound()
    {
        cout<<"Animal Sound";
    }
};

class Dog : public Animal
{
public:

    void sound()
    {
        cout<<"Dog Barks";
    }
};

int main()
{
    Dog d;

    d.sound();

    return 0;
}
