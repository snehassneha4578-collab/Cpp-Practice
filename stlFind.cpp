#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={10,20,30,40};

    int key=30;

    auto it=find(v.begin(),v.end(),key);

    if(it!=v.end())
        cout<<"Element Found";
    else
        cout<<"Element Not Found";

    return 0;
}
