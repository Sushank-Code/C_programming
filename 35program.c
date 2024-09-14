#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(i=10;i>=0;i--){
        printf("%d x %d=%d\n",n,i,i*n);
    }
    return 0;
}
//wap to print the multiplication table of n number in reverse order.