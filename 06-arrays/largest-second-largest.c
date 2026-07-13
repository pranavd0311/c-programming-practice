#include <stdio.h>
#include <limits.h>

int main(void)
{
    int arr[100];
    int n, i;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf("Enter a size between 2 and 100.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
    {
        printf("No distinct second-largest element exists.\n");
    }
    else
    {
        printf("Largest element: %d\n", largest);
        printf("Second-largest element: %d\n", secondLargest);
    }

    return 0;
}
