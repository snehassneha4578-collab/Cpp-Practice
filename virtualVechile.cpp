#include<iostream>
using namespace std;

class Vehicle
{
public:

    virtual void start()=0;

    virtual void stop()=0;
};

class Car : public Vehicle
{
public:

    void start()
    {
        cout<<"Car Started"<<endl;
    }

    void stop()
    {
        cout<<"Car Stopped";
    }
};

int main()
{
    Car c;

    c.start();

    c.stop();

    return 0;
}
