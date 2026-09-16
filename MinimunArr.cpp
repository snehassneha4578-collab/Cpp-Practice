
#include<iostream>
using namespace std;

int main()
{
    int arr[5]={20,50,10,80,40};

    int minimum=arr[0];

    for(int i=1;i<5;i++)
    {
        if(arr[i]<minimum)
        {
            minimum=arr[i];
        }
    }

    cout<<"Minimum = "<<minimum;

    return 0;
}

