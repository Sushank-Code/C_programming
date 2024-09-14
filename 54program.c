#include<stdio.h>
int sum(int a ,int b);

int main(){
    //int c;
   // c=sum(a,b);
    int a=4 ,b=10;
    //c=sum(a,b);
    printf("a+b=%d",sum(a,b));
    return 0;
}
int sum(int a ,int b){
    int c= a+b;
    return c;
    
}
