#include<iostream>
using namespace std;

class Area
{
public:

    int calculate(int side)
    {
        return side*side;
    }

    int calculate(int length,int breadth)
    {
        return length*breadth;
    }
};

int main()
{
    Area a;

    cout<<a.calculate(5)<<endl;

    cout<<a.calculate(5,4);

    return 0;
}

