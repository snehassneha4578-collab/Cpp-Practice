#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> numbers={20,30};

    numbers.push_front(10);

    numbers.push_back(40);

    for(int x:numbers)
    {
        cout<<x<<" ";
    }

    return 0;
}
