#include<iostream>
using namespace std;

class Calculator
{
public:

    Calculator(int a,int b)
    {
        cout<<"Sum = "<<a+b;
    }
};

int main()
{
    Calculator c(10,20);

    return 0;
}
