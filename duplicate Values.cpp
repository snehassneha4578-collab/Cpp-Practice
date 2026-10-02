#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 1, 4};
    int n = 6;

    unordered_set<int> s;

    for(int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    for(int x : s)
    {
        cout << x << " ";
    }

    return 0;
}
