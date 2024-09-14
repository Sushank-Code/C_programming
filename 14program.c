#include<stdio.h>

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    if(num==1){
        printf("the number is 1\n");
    }
    else if(num==2){
        printf("the number is 2\n");
    }
    else{
        printf("the number is not coperated\n");
    }
    return 0;
}