#include<stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
}e;
int main(){
    printf("Enter the value for code of e:");
    scanf("%d",&e.code);
    printf("Enter the value for salary of e:");
    scanf("%f",&e.salary);
    printf("Enter the name of e:");
    scanf("%s",&e.name[0]);
    return 0;
}