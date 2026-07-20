#include<iostream>
using namespace std;

int main()
{
    int a[3]={10,20,30};

    int *ptr=a;

    cout<<*ptr<<endl;

    ptr++;

    cout<<*ptr<<endl;

    ptr++;

    cout<<*ptr;

    return 0;
}
