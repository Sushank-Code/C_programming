#include<stdio.h>
int factorial(int x);

int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("The factorial of given number is %d",factorial(a));
    return 0;
}
int factorial(int x){
    if (x==1 || x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
//wap to find the factorial of given n number using recursion.