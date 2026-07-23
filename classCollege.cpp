#include<iostream>
using namespace std;

class College
{
public:
    char name[40];
    char location[30];
};

int main()
{
    College c;

    strcpy(c.name,"UBDT College");

    strcpy(c.location,"Davanagere");

    cout<<c.name<<endl;
    cout<<c.location;

    return 0;
}