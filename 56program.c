#include<stdio.h>

int main(){
    int a;
    printf("The address of the  variable a is %u\n",&a);
   printf("The value of adress a is %d\n",*(&a));
    //printf("The value of adress a is %d\n",*a);
    return 0;
}
//wap to print the adrress of variable.use this address to get the value of this variable.