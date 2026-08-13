#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={40,10,30,20,10};

    sort(v.begin(),v.end());

    cout<<"Sorted: ";

    for(int x:v)
        cout<<x<<" ";

    cout<<endl;

    cout<<"Minimum = "<<*min_element(v.begin(),v.end())<<endl;

    cout<<"Maximum = "<<*max_element(v.begin(),v.end())<<endl;

    cout<<"Count of 10 = "<<count(v.begin(),v.end(),10);

    return 0;
}
