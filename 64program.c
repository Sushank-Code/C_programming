#include<stdio.h>

int main(){
    int i=45;//char i='45';
    int *ptr=&i;//char *a=&i;               
    printf("The address of i is %u\n",ptr);//only add 1 because of character 
    ptr++;
   // a--;
   // a++;
    printf("The address of i is %d\n",ptr);
    return 0;
}