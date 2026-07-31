#include<iostream>
using namespace std;

template<typename T>
T largest(T a,T b)
{
    return (a>b)?a:b;
}

int main()
{
    cout<<largest(15,25);

    return 0;
}
