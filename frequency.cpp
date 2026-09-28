#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr={10,20,10,30,10,40,10};

    int target=10;

    int frequency=count(arr.begin(),arr.end(),target);

    cout<<"Frequency = "<<frequency;

    return 0;
}
