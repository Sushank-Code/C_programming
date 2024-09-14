#include<stdio.h>
void printadd(int a){
    printf("The address of varible a is %u\n",&a);
}
int main(){
    int i;
    printf("Enter the value of i\n");
    scanf("%d",&i);
    printf("The value of i is %d\n",i);
    printadd(i);
    printf("The address of i is %u\n",&i);
    return 0;
}
//wap having a variable i.print the address of i.pass the variable to a function and 
 //print its address.