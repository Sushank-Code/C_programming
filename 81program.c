#include<stdio.h>

int main(){
    char str[]="Sushank";
    char *ptr=&str[0];
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        
       // char ptr[]="Gamer";
       // printf("%s",ptr);
    
    return 0;
}