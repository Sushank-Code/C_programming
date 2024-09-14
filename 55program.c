#include<stdio.h>
int wrongswap(int a, int b);
int swap(int *a ,int *b);

int main(){
    int x=3,y=4;
    printf("The value of x and y  before swap is %d and %d\n",x,y);
   // wrongswap(x,y);
   swap(&x,&y);
    printf("The value of x and y after swap is %d and %d\n",x,y);
    return 0;
}
int wrongswap(int a, int b){
   int temp;
   temp=a;
   a=b;
   b=temp;
}
int swap(int *a ,int *b){
int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
