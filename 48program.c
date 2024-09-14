#include<stdio.h>
float temp(float c);

int main(){
    int x;
    printf("Enter the value of celsius\n");
    scanf("%d",&x);
    printf("The value fahernheit is %f\n",temp(x));
    return 0;
}
float temp(float c){
    float result;
    result=(c*9/5)+32;
    return result;
}
//wap to covert the celsius into farenheit.