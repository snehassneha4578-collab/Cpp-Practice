#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int arr[7]={10,20,30,20,40,50,30};

    unordered_set<int> seen;

    for(int i=0;i<7;i++)
    {
        if(seen.find(arr[i])!=seen.end())
        {
            cout<<"Duplicate = "<<arr[i]<<endl;
        }
        else
        {
            seen.insert(arr[i]);
        }
    }

    return 0;
}
