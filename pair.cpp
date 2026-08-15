#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int,string> student;

    student.first=101;
    student.second="Sneha";

    cout<<"Roll No = "<<student.first<<endl;
    cout<<"Name = "<<student.second;

    return 0;
}
