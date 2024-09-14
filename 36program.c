#include<stdio.h>

int main(){
    int i,sum=0,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum+=i;
    }
        printf("The sum of first n natural number is%d\n",sum);
    
    return 0;
}
//wap to print the sum of first n natural number using loop.