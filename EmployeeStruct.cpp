#include<iostream>
using namespace std;

struct Address
{
    char city[20];
};

struct Employee
{
    int id;
    Address addr;
};

int main()
{
    Employee e={1,{"Bengaluru"}};

    cout<<e.id<<endl;
    cout<<e.addr.city;

    return 0;
}
