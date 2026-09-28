#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr={10,20,30,40,50};

    reverse(arr.begin(),arr.end());

    for(int x:arr)
    {
        cout<<x<<" ";
    }

    return 0;
}
