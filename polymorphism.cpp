#include<iostream>
using namespace std;

class Calculator
{
public:

    void add(int a,int b)
    {
        cout<<"Sum = "<<a+b<<endl;
    }

    void add(int a,int b,int c)
    {
        cout<<"Sum = "<<a+b+c;
    }
};

int main()
{
    Calculator c;

    c.add(10,20);

    c.add(10,20,30);

    return 0;
}
