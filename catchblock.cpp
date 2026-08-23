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
        cout<<"Integer Exception";
    }
    catch(double x)
    {
        cout<<"Double Exception";
    }
    catch(const char* x)
    {
        cout<<"String Exception";
    }

    return 0;
}

