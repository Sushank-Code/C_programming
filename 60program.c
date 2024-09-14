#include<stdio.h>

int main(){
    int i=345;
    int *a;
    int **b;
    a= &i;
    b= &a;
    printf("The value of i is %d",**b);
    return 0;
}
//wap to print the value of a variable i by using 'pointer to pointer'type of variable.