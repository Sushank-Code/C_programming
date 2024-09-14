#include<stdio.h>

int main(){
    int n,i,factorial=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
     factorial *=i;   
    }
    printf("The factorial of given number is %d",factorial);
    return 0;
}
//wap to print the factorial of n number.