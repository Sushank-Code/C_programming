#include<stdio.h>

void decrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr - 1;
        ptr++;
    }
    printf("decryption string  is %s",c);
}
int main(){
    char c[]="Hbnjoh";
    decrypt(c);
    return 0;
}