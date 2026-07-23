#include<iostream>
using namespace std;

class Car
{
public:
    char brand[20];
    int price;
};

int main()
{
    Car c;

    strcpy(c.brand,"Toyota");

    c.price=1500000;

    cout<<c.brand<<endl;
    cout<<c.price;

    return 0;
}
