#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;

    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);

    printf("(a < b) && (a != 0) : %d\n", (a < b) && (a != 0));
    printf("(a > b) || (b > 0) : %d\n", (a > b) || (b > 0));
    printf("!(a < b) : %d\n", !(a < b));

    return 0;
}
