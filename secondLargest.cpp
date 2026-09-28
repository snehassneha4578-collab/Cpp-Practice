#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr={10,50,20,50,40,30};

    sort(arr.begin(),arr.end());

    int largest=arr.back();
    int second=-1;

    for(int i=arr.size()-2;i>=0;i--)
    {
        if(arr[i]!=largest)
        {
            second=arr[i];
            break;
        }
    }

    cout<<"Largest = "<<largest<<endl;
    cout<<"Second Largest = "<<second;

    return 0;
}

