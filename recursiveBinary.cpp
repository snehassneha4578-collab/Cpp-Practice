#include<iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target)
{
    if(low>high)
    {
        return -1;
    }

    int mid=low+(high-low)/2;

    if(arr[mid]==target)
    {
        return mid;
    }

    if(arr[mid]<target)
    {
        return binarySearch(arr,mid+1,high,target);
    }

    return binarySearch(arr,low,mid-1,target);
}

int main()
{
    int arr[7]={10,20,30,40,50,60,70};

    int target=60;

    int result=binarySearch(arr,0,6,target);

    if(result!=-1)
    {
        cout<<"Element found at index "<<result;
    }
    else
    {
        cout<<"Element not found";
    }

    return 0;
}
