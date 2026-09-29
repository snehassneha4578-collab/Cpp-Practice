#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(10);
    d.push_back(20);
    d.push_front(5);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();

    cout<<d.front();

    return 0;
}
