
#include<iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw 50;
        }

        catch(int)
        {
            cout<<"Inner Catch";
        }
    }

    catch(...)
    {
        cout<<"Outer Catch";
    }

    return 0;
}

