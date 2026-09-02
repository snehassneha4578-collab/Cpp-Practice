#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={10,20,10,30,10};

    int result=count(v.begin(),v.end(),10);

    cout<<"Count = "<<result;

    return 0;
}
