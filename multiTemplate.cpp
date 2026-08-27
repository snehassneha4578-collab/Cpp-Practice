#include<iostream>
using namespace std;

template <typename T,typename U>
void display(T a,U b)
{
    cout<<a<<" "<<b;
}

int main()
{
    display(101,"Sneha");

    return 0;
}

