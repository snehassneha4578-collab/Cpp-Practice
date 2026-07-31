#include<iostream>
using namespace std;

template<typename T>
T square(T x)
{
    return x*x;
}

int main()
{
    cout<<square(8);

    return 0;
}
