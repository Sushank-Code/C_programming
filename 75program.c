#include<stdio.h>
void reverse(int *arr,int n){
    int temp;
    for(int i=0;i<(n/2);i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}

int main(){
    //int arr[]={1,2,3,4,5,6,7};
    int arr[7];
    for(int i=0;i<7;i++){
      printf("Enter the value for %d phase:",i+1);
      scanf("%d",&arr[i]);
    }
   reverse(arr,7);
    for(int i=0;i<7;i++){
        printf("The value of %d elements is :%d\n",i,arr[i]);
    }
    return 0;
}
//wap containing a function which reverses the array passes to it.