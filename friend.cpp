#include<iostream>
using namespace std;

class Demo
{
private:

    int num;

public:

    Demo()
    {
        num=50;
    }

    friend void display(Demo);
};

void display(Demo d)
{
    cout<<d.num;
}

int main()
{
    Demo d;

    display(d);

    return 0;
}
