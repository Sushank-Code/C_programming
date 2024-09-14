#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
}s;

int main(){
    printf("Enter your rollno and name\n");
    scanf("%d %s",&s.rollno,&s.name[0]);
    printf("Your name and rollno is %d and %s",s.rollno,s.name);
    return 0;
}