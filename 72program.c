#include<stdio.h>

int main(){
    int arr[10];
    int *ptr=&arr[0];
    ptr= ptr+2;
    if(ptr==&arr[2]){
        printf("These point to the same location in memory\n");
    }
    else{
        printf("These donot point to the same location in memory\n");
    }
    return 0;
}
//create an array of 10 numbers.verify using the pointer arithmetic that (ptr+2)points to the third
//elememts where ptr is a pointer pointing to the first element of the array.