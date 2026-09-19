#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[5]={10,20,30,40,50};

    bool result=binary_search(arr,arr+5,30);

    if(result)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not Found";
    }

    return 0;
}
