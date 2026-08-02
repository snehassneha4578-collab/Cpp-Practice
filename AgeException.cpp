#include<iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Enter Age: ";
    cin>>age;

    try
    {
        if(age<18)
            throw age;

        cout<<"Eligible for Voting";
    }

    catch(int x)
    {
        cout<<"Not Eligible. Age = "<<x;
    }

    return 0;
}

