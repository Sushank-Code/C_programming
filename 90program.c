#include<stdio.h>

void encrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr + 1;
        ptr++;
    }
    printf("Encrypted string is %s",c);
}
int main(){
    char c[]="Gaming";
    encrypt(c);
    return 0;
}
//WAP to encrypt a string by adding 1 to the ascii value of its character.