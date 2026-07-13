#include <stdio.h>

unsigned long long calculateFactorial(int number)
{
    unsigned long long factorial = 1;
    int i;

    for (i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}

int main(void)
{
    int number;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        printf("Factorial of %d is %llu\n",
               number, calculateFactorial(number));
    }

    return 0;
}
