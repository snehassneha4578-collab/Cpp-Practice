#include<iostream>
using namespace std;

template<class T>
class Number
{
public:

    T value;

    Number(T x)
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
    Number<int> n(100);

    n.display();

    return 0;
}
