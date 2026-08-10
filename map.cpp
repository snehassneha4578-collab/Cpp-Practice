#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> students;

    students[101]="Sneha";
    students[102]="Rahul";
    students[103]="Anu";

    for(auto x:students)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}
