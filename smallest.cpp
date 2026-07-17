#include<iostream>
using namespace std;

int main()
{
    int a[5]={5,10,15,20,25};
    int smallest=a[0];

    for(int i=1;i<5;i++)
    {
        if(a[i]<smallest)
            smallest=a[i];
    }

    cout<<"Smallest = "<<smallest;

    return 0;
}


