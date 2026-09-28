#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr={40,10,70,20,90,30};

    int minimum=*min_element(arr.begin(),arr.end());
    int maximum=*max_element(arr.begin(),arr.end());

    cout<<"Minimum = "<<minimum<<endl;
    cout<<"Maximum = "<<maximum;

    return 0;
}