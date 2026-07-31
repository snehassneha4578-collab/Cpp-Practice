#include<iostream>
using namespace std;

template<class T>
class Demo
{
public:

    T a,b;

    Demo(T x,T y)
    {
        a=x;
        b=y;
    }

    void display()
    {
        cout<<a<<" "<<b;
    }
};

int main()
{
    Demo<int> d(10,20);

    d.display();

    return 0;
}
