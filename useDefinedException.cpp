#include<iostream>
using namespace std;

int main()
{
    int age=15;

    try
    {
        if(age<18)
        {
            throw "Not eligible";
        }

        cout<<"Eligible";
    }
    catch(const char* message)
    {
        cout<<message;
    }

    return 0;
}
