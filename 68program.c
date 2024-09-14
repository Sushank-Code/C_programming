#include<stdio.h>
void printarray(int ptr[],int n){
    for(int i=0;i<n;i++){
        printf("The value of elements %d is %d\n",i+1,ptr[i]);
    }
    //ptr[2]=5555; This value will be changes in arr arrray of main as well
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    printarray(arr,7);
    //printf("%d",arr[2]);
    return 0;
}