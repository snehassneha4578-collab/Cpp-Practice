#include<iostream>
using namespace std;

int main()
{
    int arr[7]={10,20,30,40,50,60,70};

    int key=60;

    int low=0;
    int high=6;

    bool found=false;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]==key)
        {
            cout<<"Element Found at index "<<mid;
            found=true;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    if(!found)
    {
        cout<<"Element Not Found";
    }

    return 0;
}
