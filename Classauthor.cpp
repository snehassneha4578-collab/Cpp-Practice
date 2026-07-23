#include<iostream>
using namespace std;

class Book
{
public:
    char title[30];
    char author[30];
};

int main()
{
    Book b;

    strcpy(b.title,"C++");

    strcpy(b.author,"Bjarne");

    cout<<b.title<<endl;
    cout<<b.author;

    return 0;
}
s