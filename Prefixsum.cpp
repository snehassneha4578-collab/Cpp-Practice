#include<iostream>
using namespace std;

int main()
{
    int arr[5]={2,4,6,8,10};

    int prefix[5];

    prefix[0]=arr[0];

    for(int i=1;i<5;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<prefix[i]<<" ";
    }

    return 0;
}

