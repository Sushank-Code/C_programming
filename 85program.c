#include<stdio.h>
#include<string.h>

int main(){
    char *st1="Wow";
    char st2[50];
    strcpy(st2,st1);
    printf("Now the st2 is %s",st2);
    return 0;
}