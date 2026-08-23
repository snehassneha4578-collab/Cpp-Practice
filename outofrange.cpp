#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={10,20,30};

    try
    {
        cout<<v.at(5);
    }
    catch(const out_of_range& e)
    {
        cout<<"Exception: "<<e.what();
    }

    return 0;
}
