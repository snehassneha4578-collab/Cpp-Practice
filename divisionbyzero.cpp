
#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int b=0;

    try
    {
        if(b==0)
        {
            throw "Division by zero is not allowed";
        }

        cout<<a/b;
    }
    catch(const char* message)
    {
        cout<<message;
    }

    return 0;
}
