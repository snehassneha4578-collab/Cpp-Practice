#include<iostream>
using namespace std;

class Shape
{
public:

    virtual void area()=0;
};

class Square : public Shape
{
public:

    void area() override
    {
        int side=5;

        cout<<"Area = "<<side*side;
    }
};

int main()
{
    Square s;

    s.area();

    return 0;
}
