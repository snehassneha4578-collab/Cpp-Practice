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
        cout<<"Value = "<<value<<endl;
    }
};

int main()
{
    Box<int> b1(100);

    Box<double> b2(25.5);

    Box<string> b3("Hello");
    b1.display();
    b2.display();
    b3.display();

    return 0;
}

