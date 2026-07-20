#include<iostream>
using namespace std;

int main()
{
    int number=50;

    int *ptr=&number;

    cout<<"Address = "<<ptr<<endl;

    cout<<"Value = "<<*ptr;

    return 0;
}