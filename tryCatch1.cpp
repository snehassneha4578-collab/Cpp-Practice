#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 10;
    }
    catch(int x)
    {
        cout<<"Exception = "<<x;
    }

    return 0;
}
