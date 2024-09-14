#include<stdio.h>

int main(){
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d is not prime number",n);
            break;
            }
    }
    if(i==n)
    printf("%d is prime number",n);
        return 0;
}
//wap to print the number and check whether it is prime number or not.