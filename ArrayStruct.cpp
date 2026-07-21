#include<iostream>
using namespace std;

struct Student
{
    int id;
    char name[20];
};

int main()
{
    Student s[2]=
    {
        {1,"Sneha"},
        {2,"Preethi"}
    };

    for(int i=0;i<2;i++)
    {
        cout<<s[i].id<<" "<<s[i].name<<endl;
    }

    return 0;
}
