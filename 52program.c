#include<stdio.h>
int fib(int n);

int main(){
    int a;
    printf("Enter the value of n\n");
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
    printf("%d",fib(i));
    }
    return 0;
}
int fib(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
   return fib(n-1)+fib(n-2);
  }
//wap to print the fibbonacci series using recursion.