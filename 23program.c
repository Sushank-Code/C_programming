#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    while(a<5){
        printf("%d\n",a);
        a++;
    }
    return 0;
}