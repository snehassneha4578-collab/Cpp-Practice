#include<iostream>
using namespace std;

void display(int *p)
{
    cout<<*p;
}

int main()
{
    int n=100;

    display(&n);

    return 0;
}
