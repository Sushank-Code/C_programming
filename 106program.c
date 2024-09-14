#include<stdio.h>

int main(){
    FILE *ptr;
    int num=56;
    ptr=fopen("input.txt","w");
    fprintf(ptr,"The number is %d",num);
    fclose(ptr);
    return 0;
}