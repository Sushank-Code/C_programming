#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int arr[10];
    for(int i=0;i<10;i++){
       arr[i]=n*(i+1);
    }
    for(int i=0;i<10;i++){
       printf("%dx%d = %d\n",n,i+1,arr[i]);
    }
    return 0;
}
//create a array by taking input user .print the multiplication table in it.