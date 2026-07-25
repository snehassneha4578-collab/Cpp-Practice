#include<iostream>
using namespace std;

class Demo
{
public:

    static int x;

    static void display()
    {
        cout<<x;
    }
};

int Demo::x=100;

int main()
{
    Demo::display();

    return 0;
}

