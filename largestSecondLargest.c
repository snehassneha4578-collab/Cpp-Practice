#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100], n, i;
    int largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = INT_MIN;
    secondLargest = INT_MIN;

    for(i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Second largest element = %d", secondLargest);

    return 0;
}
