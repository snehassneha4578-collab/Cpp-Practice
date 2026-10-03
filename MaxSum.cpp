#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = 6;
    int k = 3;

    int sum = 0;

    for(int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    int maxSum = sum;

    for(int i = k; i < n; i++)
    {
        sum += arr[i];
        sum -= arr[i - k];

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    cout << "Maximum Sum = " << maxSum;

    return 0;
}
