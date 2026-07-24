#include<iostream>
using namespace std;

class Number
{
public:

    int value;

    Number(int x)
    {
        value=x;
    }

    void display()
    {
        cout<<value;
    }
};

int main()
{
    Number n(50);

    n.display();

    return 0;
}