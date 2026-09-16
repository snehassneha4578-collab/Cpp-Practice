#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100], n, i;
    int smallest, secondSmallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    smallest = INT_MAX;
    secondSmallest = INT_MAX;

    for(i = 0; i < n; i++)
    {
        if(arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }

    if(secondSmallest == INT_MAX)
        printf("Second smallest element does not exist.\n");
    else
        printf("Second smallest element = %d\n", secondSmallest);

    return 0;
}
