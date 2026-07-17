#include<iostream>
using namespace std;

int main()
{
    int a[5]={5,10,15,20,25};
    int sum=0;

    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }

    cout<<"Sum = "<<sum;

    return 0;
}
