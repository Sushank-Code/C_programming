#include<stdio.h>

int main(){
    int i,b;
    printf("Enter the value of i and b\n");
    scanf("%d %d",&i,&b);
    //*ptr=&i;
    //*abc=&b;
    printf("The address of i is %u\n",&i);
    printf("The address of b is %u\n",&b);

    if(&i==&b){
        printf("The address is same of both i and b");
    }
    else{
        printf("Not same ");
    }
    return 0;
}