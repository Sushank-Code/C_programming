#include<stdio.h>

void sum(int a,int b);

int main(){
   
    sum(2,5);
   
    return 0;
}
void sum(int a,int b){
    int c;
    c = a+b;
    printf("The sum is %d",c);
    }