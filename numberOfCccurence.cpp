#include<iostream>
using namespace std;

int main()
{
    int arr[10]={10,20,20,20,20,30,40,50,60,70};

    int target=20;

    int low=0;
    int high=9;

    int first=-1;
    int last=-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]==target)
        {
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    low=0;
    high=9;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]==target)
        {
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    if(first==-1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Count = "<<last-first+1;
    }

    return 0;
}

