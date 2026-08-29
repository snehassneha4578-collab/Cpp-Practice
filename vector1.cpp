#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> numbers={10,20,30};

    numbers.push_back(40);

    for(int x:numbers)
    {
        cout<<x<<" ";
    }

    return 0;
}
