#include<stdio.h>

int main(){
    int marks[10];
    for(int i=0;i<10;i++){
        printf("Enter the value of students %d:",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<10;i++){
        printf("The marks  of %d students is %d\n",i+1,marks[i]);
    }
    return 0;
}