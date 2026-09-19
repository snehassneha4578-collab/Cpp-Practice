
#include<iostream>
using namespace std;

int main()
{
    int arr[8]={10,20,20,20,30,40,50,60};

    int target=20;

    int low=0;
    int high=7;

    int answer=-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]==target)
        {
            answer=mid;
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

    cout<<"First occurrence = "<<answer;

    return 0;
}
