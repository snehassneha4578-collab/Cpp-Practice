#include<iostream>
using namespace std;

int main()
{
    int arr[5]={10,20,30,40,50};

    int left=0;
    int right=4;

    while(left<right)
    {
        swap(arr[left],arr[right]);

        left++;
        right--;
    }

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

