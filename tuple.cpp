#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    tuple<int,string,float> student(101,"Sneha",8.6);

    cout<<"Roll No = "<<get<0>(student)<<endl;
    cout<<"Name = "<<get<1>(student)<<endl;
    cout<<"CGPA = "<<get<2>(student);

    return 0;
}
