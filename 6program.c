#include <stdio.h>

int main()
{
    float r;
    float pi = 3.14,a;
    printf("the radius is\n");
    scanf("%f", &r);

    a = pi * r * r;
    printf("the area of cirlce is %f",a);
    return 0;
}