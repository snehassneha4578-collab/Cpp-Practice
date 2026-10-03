#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 2};
    int n = 5;

    unordered_set<int> s;

    for(int i = 0; i < n; i++)
    {
        if(s.find(arr[i]) != s.end())
        {
            cout << "Duplicate Found";
            return 0;
        }

        s.insert(arr[i]);
    }

    cout << "No Duplicate";

    return 0;
}

