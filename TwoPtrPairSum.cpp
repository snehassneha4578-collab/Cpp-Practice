#include<iostream>
using namespace std;

int main()
{
    int arr[6]={1,2,3,4,6,8};

    int target=10;

    int left=0;
    int right=5;

    bool found=false;

    while(left<right)
    {
        int sum=arr[left]+arr[right];

        if(sum==target)
        {
            cout<<"Pair = "
                <<arr[left]<<" "
                <<arr[right];

            found=true;
            break;
        }
        else if(sum<target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    if(!found)
    {
        cout<<"Pair not found";
    }

    return 0;
}
