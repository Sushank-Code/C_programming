#include<stdio.h>

int main(){
    int i=1;
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    do{
        printf("The  natural number is%d\n",i);
        i++;
    }while(i<=n);
    return 0;
}
//to print first n natural numbers using do-while loop.