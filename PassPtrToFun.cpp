
#include<iostream>
using namespace std;

void display(int *p)
{
    cout<<"Value = "<<*p;
}

int main()
{
    int num=100;

    display(&num);

    return 0;
}