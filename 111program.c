#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("table.txt","w");
    int num;
    printf("Enter the values of number\n");
    scanf("%d",&num);   
    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d X %d=%d\n",num,i,num*i);
    } 
    fclose(ptr);
    return 0;
}
//WAP to present mutliplication of any table in file.