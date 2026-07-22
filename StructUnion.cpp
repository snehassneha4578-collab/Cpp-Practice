#include<iostream>
using namespace std;

struct A
{
    int x;
    float y;
};

union B
{
    int x;
    float y;
};

int main()
{
    cout<<"Structure size = "<<sizeof(A)<<endl;

    cout<<"Union size = "<<sizeof(B);

    return 0;
}

