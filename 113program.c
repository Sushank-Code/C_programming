#include<stdio.h>

int main(){
    FILE *ptr;
    int a1,a2;
    char s[10],s1[10];
    printf("Enter the  name of two employee\n");
    scanf("%s %s",&s[0],&s1[0]);
    //gets(s);
    //gets(s1);
    printf("Enter the salary of a1 and a2\n");
    scanf("%d %d",&a1,&a2);
    ptr=fopen("employee.txt","w");
    fprintf(ptr,"Employee 1 is %s ,and salaray is %d\n",s,a1);
    fprintf(ptr,"Employee 2 is %s ,and salaray is %d\n",s1,a2);
    fclose(ptr);
    return 0;
}
//Take name and salary of two employee as input from the user and write them to a text file.