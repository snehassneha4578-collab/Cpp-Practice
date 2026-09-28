#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr={40,10,50,20,30};

    sort(arr.begin(),arr.end(),greater<int>());

    for(int x:arr)
    {
        cout<<x<<" ";
    }

    return 0;
}
