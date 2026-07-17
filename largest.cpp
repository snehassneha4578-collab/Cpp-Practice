#include<iostream>
using namespace std;

int main()
{
    int a[5]={5,10,15,20,25};
    int largest=a[0];

    for(int i=1;i<5;i++)
    {
        if(a[i]>largest)
            largest=a[i];
    }

    cout<<"Largest = "<<largest;

    return 0;
}
