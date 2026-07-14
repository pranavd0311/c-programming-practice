#include <stdio.h>

int main(void)
{
    int arr[100];
    int n, i, target;
    int foundIndex = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Enter a size between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1)
    {
        printf("%d found at index %d.\n", target, foundIndex);
    }
    else
    {
        printf("%d not found in the array.\n", target);
    }

    return 0;
}
