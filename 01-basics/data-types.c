#include <stdio.h>

int main(void)
{
    int age = 20;
    float cgpa = 8.0f;
    char grade = 'A';
    double percentage = 80.25;

    printf("Age: %d\n", age);
    printf("CGPA: %.1f\n", cgpa);
    printf("Grade: %c\n", grade);
    printf("Percentage: %.2lf\n", percentage);

    return 0;
}
