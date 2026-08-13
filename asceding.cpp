#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={50,20,40,10,30};

    sort(v.begin(),v.end());

    for(int x:v)
        cout<<x<<" ";

    return 0;
}
