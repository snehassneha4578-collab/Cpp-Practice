#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 'A';
    }

    catch(int)
    {
        cout<<"Integer";
    }

    catch(char)
    {
        cout<<"Character";
    }

    return 0;
}
