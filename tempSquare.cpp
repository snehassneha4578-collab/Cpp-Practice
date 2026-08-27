#include<iostream>
using namespace std;

template <typename T>
T square(T x)
{
    return x*x;
}

int main()
{
    cout<<"Square = "<<square(5);

    return 0;
}
