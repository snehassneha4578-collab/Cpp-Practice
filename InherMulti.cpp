#include<iostream>
using namespace std;

class Vehicle
{
public:

    void start()
    {
        cout<<"Vehicle Started"<<endl;
    }
};

class Car : public Vehicle
{
public:

    void drive()
    {
        cout<<"Car Driving"<<endl;
    }
};

class SportsCar : public Car
{
public:

    void speed()
    {
        cout<<"High Speed";
    }
};

int main()
{
    SportsCar s;

    s.start();

    s.drive();

    s.speed();

    return 0;
}
