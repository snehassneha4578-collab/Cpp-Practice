
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="MADAM";

    string rev=s;

    reverse(rev.begin(),rev.end());

    if(s==rev)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }

    return 0;
}
