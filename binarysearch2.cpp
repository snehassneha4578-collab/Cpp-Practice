#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5;
    int target = 7;

    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
        {
            cout << "Found at index " << mid;
            return 0;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Not Found";

    return 0;
}
