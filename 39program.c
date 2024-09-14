#include<stdio.h>

int main(){
    int n,i=2;
    printf("Enter the value to be calculated\n");
    scanf("%d",&n);

    while(i<n){
           i++;
       // printf("the value of i is%d\n",i);
        if(n%i==0){
            printf("%d is the not prime number\n",n);
            break;
        }
    
        if(i==n) {
            printf("%d is the prinme number",n);
}
    }   
    return 0;
}