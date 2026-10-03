#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    unordered_set<int> s;

    for(int i = 0; i < n; i++)
    {
        int required = target - arr[i];

        if(s.find(required) != s.end())
        {
            cout << "Pair Found";
            return 0;
        }

        s.insert(arr[i]);
    }

    cout << "Pair Not Found";

    return 0;
}
