#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string a="listen";
    string b="silent";

    if(a.length()!=b.length())
    {
        cout<<"Not Anagram";
        return 0;
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if(a==b)
    {
        cout<<"Anagram";
    }
    else
    {
        cout<<"Not Anagram";
    }

    return 0;
}

