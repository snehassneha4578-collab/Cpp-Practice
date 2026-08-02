#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 100;
    }

    catch(int x)
    {
        cout<<"Integer Exception";
    }

    catch(...)
    {
        cout<<"Unknown Exception";
    }

    return 0;
}
