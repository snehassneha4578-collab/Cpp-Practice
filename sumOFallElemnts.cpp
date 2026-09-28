#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    vector<int> arr={10,20,30,40,50};

    int sum=accumulate(arr.begin(),arr.end(),0);

    cout<<"Sum = "<<sum;

    return 0;
}
