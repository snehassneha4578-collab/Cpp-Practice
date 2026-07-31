#include<iostream>
using namespace std;

template<class T>
class Demo
{
public:

    T value;

    Demo(T x)
    {
        value=x;
    }

    void display()
    {
        cout<<value;
    }
};

int main()
{
    Demo<int> d1(100);
    Demo<float> d2(25.75);

    d1.display();

    cout<<endl;

    d2.display();

    return 0;
}

