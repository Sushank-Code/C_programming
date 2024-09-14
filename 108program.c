#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("putc.txt","w");
    putc('d',ptr);
    fclose(ptr);
    return 0;
}