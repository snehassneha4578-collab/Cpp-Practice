#include<iostream>
using namespace std;

int main()
{
    int n=-5;

    try
    {
        if(n<0)
        {
            throw n;
        }

        cout<<"Positive Number";
    }
    catch(int x)
    {
        cout<<"Negative Number = "<<x;
    }

    return 0;
}

