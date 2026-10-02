#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {5, 5, 2, 3, 5, 2};
    int n = 6;

    unordered_map<int, int> freq;

    for(int x : arr)
    {
        freq[x]++;
    }

    for(auto x : freq)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}

