#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);

    if(a < 0){
        printf("The value is negartive\n");
    }
    else{
        printf("The value is positive\n");
    }
    return 0;
}
//wap to find whether the entered number is positive or neagtive.