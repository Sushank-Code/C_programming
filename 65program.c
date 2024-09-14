#include<stdio.h>

int main(){
    int i=67;
    int *ptr=&i;
    int b=43;
    int *abc=&b;
    printf("The  address i is %u\n",ptr);
    ptr++;
    printf("The address of b is %u\n",abc);
    abc++;
    
    printf("The value of c is %u\n",ptr-abc);
    return 0;
}