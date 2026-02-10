#include <stdio.h>
int main()
{    float a = 180;
    float b;
    float c;

    printf("Enter the degree of triangle : ");
    scanf("%f %f", &b, &c);
    printf("The Third Angle is :%f", a - (b + c));
    return 0;
}