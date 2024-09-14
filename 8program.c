#include <stdio.h>

int main()
{
    float i, p, t, r;
    printf("p is\n");
    scanf("%f", &p);

    printf("t is\n");
    scanf("%f", &t);

    printf("r is\n");
    scanf("%f", &r);

    i = p * t * r / 100 ;
    printf("the simple interset is%f", i);

    return 0;
}