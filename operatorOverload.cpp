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

    Number operator +(Number n)
    {
        return Number(value+n.value);
    }
};

int main()
{
    Number n1(10);

    Number n2(20);

    Number n3=n1+n2;

    cout<<n3.value;

    return 0;
}

