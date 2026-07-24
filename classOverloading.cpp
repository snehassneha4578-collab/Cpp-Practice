#include<iostream>
using namespace std;

class Test
{
public:

    Test()
    {
        cout<<"Default"<<endl;
    }

    Test(int x)
    {
        cout<<"Parameterized"<<endl;
    }
};

int main()
{
    Test t1;

    Test t2(10);

    return 0;
}