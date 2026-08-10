#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> students;

    students[1]="Sneha";
    students[2]="Rahul";

    int key=2;

    if(students.find(key)!=students.end())
        cout<<"Key Found";
    else
        cout<<"Key Not Found";

    return 0;
}
