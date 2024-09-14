#include<stdio.h>

int main(){
    float c,f;
    printf("the given celsius is\n");
    scanf("%f",&c);

    f=(c*9/5)+32;
    printf("the farenheit is%f",f);
    return 0;
}