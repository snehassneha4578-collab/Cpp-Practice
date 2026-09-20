#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int arr[6]={10,20,10,30,20,10};

    unordered_map<int,int> frequency;

    for(int i=0;i<6;i++)
    {
        frequency[arr[i]]++;
    }

    for(auto x:frequency)
    {
        cout<<x.first<<" -> "<<x.second<<endl;
    }

    return 0;
}

