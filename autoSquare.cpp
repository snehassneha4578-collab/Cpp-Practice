#include<iostream>
using namespace std;

int main()
{
    auto square=[](int x)
    {
        return x*x;
    };

    cout<<square(5);

    return 0;
}
