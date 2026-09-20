#include<iostream>
using namespace std;

int main()
{
    int arr[7]={1,2,3,4,6,8,10};

    int target=10;

    int left=0;
    int right=6;

    bool found=false;

    while(left<right)
    {
        int sum=arr[left]+arr[right];

        if(sum==target)
        {
            cout<<"Pair found: "
                <<arr[left]<<" + "
                <<arr[right]<<" = "
                <<target;

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
