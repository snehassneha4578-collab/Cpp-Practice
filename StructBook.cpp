#include<iostream>
using namespace std;

struct Book
{
    int id;
    char title[30];
};

int main()
{
    Book b={1,"C++ Programming"};

    cout<<b.id<<endl;
    cout<<b.title;

    return 0;
}
