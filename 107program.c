#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("get.txt","r");
    //char c=fgetc(ptr);
    //printf("The value of my character is %c\n",c);
    printf("The value of my character is %c\n",fgetc(ptr));
    printf("The value of my character is %c\n",fgetc(ptr));
    fclose(ptr);
    return 0;
}