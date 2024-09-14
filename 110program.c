#include<stdio.h>

int main(){
    int a,b,c;
    FILE *ptr;
    ptr=fopen("reading.txt","r");
    fscanf(ptr,"%d %d %d",&a, &b ,&c);
    printf("The values of a,b and c is %d %d %d\n",a ,b,c);
    fclose(ptr);
    return 0;
}
//WAP to read three integers from the file.