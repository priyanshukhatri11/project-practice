#include <stdio.h>
int main()
{
    float b;
    float hra = 10;
    float da = 5;
    float ta = 8;

    printf("Enter base salary: ");
    scanf("%f",&b);

    printf("Gross Salary is : %f",b + (b * hra / 100) + (b * da / 100) + (b * ta / 100));

    return 0;
}
