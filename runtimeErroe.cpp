#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
    try
    {
        throw runtime_error("Something went wrong");
    }
    catch(const exception& e)
    {
        cout<<e.what();
    }

    return 0;
}
