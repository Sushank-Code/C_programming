#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);

    if(a%2==0){
        printf(" the number is even\n ", a);
    }
    else{
        printf("the number is odd \n", a); 
    } 
    return 0;
}
//to check whether the given number is odd or even