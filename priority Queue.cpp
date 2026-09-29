#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(10);
    pq.push(50);
    pq.push(20);
    pq.push(30);

    cout<<"Top = "<<pq.top()<<endl;

    pq.pop();

    cout<<"Top after pop = "<<pq.top();

    return 0;
}
