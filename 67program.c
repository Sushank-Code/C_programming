#include<stdio.h>

int main(){
    int marks[4];
    int *ptr;
    ptr=&marks[0];
    for(int i=0;i<4;i++){
        printf("Enter the value of marks of students %d:",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0;i<4;i++){
        printf("The value of marks of students %d is %d\n",i+1,marks[i]);
    }
    return 0;
}
//acessing arrays from pointer
//int *ptr=&arr[0];
//ptr++;
//