#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(10);

    cout << s.size();

    return 0;
}

