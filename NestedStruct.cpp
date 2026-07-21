#include<iostream>
using namespace std;

struct Address
{
    char city[20];
};

struct Student
{
    int id;
    Address addr;
};

int main()
{
    Student s={101,{"Davanagere"}};

    cout<<s.id<<endl;
    cout<<s.addr.city;

    return 0;
}

