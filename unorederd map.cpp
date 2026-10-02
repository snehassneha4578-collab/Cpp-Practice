#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> mp;

    mp[10] = 100;
    mp[20] = 200;

    cout << mp[10];

    return 0;
}

