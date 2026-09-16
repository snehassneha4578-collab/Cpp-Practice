#include<iostream>
using namespace std;

int main()
{
    int arr[6]={10,15,20,25,30,35};

    int even=0;
    int odd=0;

    for(int i=0;i<6;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout<<"Even = "<<even<<endl;
    cout<<"Odd = "<<odd;

    return 0;
}
