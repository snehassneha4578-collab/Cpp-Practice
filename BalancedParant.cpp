#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string s="{[()]}";

    stack<char> st;

    bool balanced=true;

    for(char ch:s)
    {
        if(ch=='(' || ch=='[' || ch=='{')
        {
            st.push(ch);
        }
        else if(ch==')' || ch==']' || ch=='}')
        {
            if(st.empty())
            {
                balanced=false;
                break;
            }

            char top=st.top();

            if((ch==')' && top!='(') ||
               (ch==']' && top!='[') ||
               (ch=='}' && top!='{'))
            {
                balanced=false;
                break;
            }

            st.pop();
        }
    }

    if(!st.empty())
    {
        balanced=false;
    }

    if(balanced)
    {
        cout<<"Balanced";
    }
    else
    {
        cout<<"Not Balanced";
    }

    return 0;
}

