#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="Hello";

    int vowels=0;
    int consonants=0;

    for(char c:s)
    {
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    cout<<"Vowels = "<<vowels<<endl;
    cout<<"Consonants = "<<consonants;

    return 0;
}
