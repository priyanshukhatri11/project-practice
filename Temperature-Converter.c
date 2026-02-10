#include <stdio.h>

int main()
{
    float d = 1.8;
    float c;

    printf("Enter degree celsius : ");
    scanf("%f", &c);

    printf("Your farenhiet degree is : %f", d * c + 32);

    return 0;
}
