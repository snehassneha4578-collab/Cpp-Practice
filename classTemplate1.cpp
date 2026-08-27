#include<iostream>
using namespace std;

template <typename T>
class Box
{
private:

    T value;

public:

    Box(T v)
    {
        value=v;
    }

    void display()
    {
        cout<<"Value = "<<value;
    }
};

int main()
{
    Box<int> b1(100);

    b1.display();

    return 0;
}

