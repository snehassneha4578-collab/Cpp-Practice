#include<iostream>
using namespace std;

int main()
{
    int arr[5]={20,50,10,40,30};

    int largest=arr[0];

    for(int i=1;i<5;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    cout<<"Largest = "<<largest;

    return 0;
}

