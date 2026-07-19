#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[]="Apple";
    char s2[]="Orange";

    if(strcmp(s1,s2)==0)
        cout<<"Equal";
    else
        cout<<"Not Equal";

    return 0;
}
