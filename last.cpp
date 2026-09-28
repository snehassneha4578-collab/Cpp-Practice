#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={10,20,30,40,50};

    arr.pop_back();

    for(int x:arr)
    {
        cout<<x<<" ";
    }

    return 0;
}
