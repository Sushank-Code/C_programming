#include<stdio.h>
int strlen(char *st){
    char *ptr=st;
    int len=0;
    while(ptr!='\0'){
        len++;
    }
        ptr++;
    return len;
}

int main(){
    char st[]="sushank";
    int l=strlen(st);
    printf("The length of this string is %d\n",l);
    return 0;
}
//Write your own version of strlen function from <string.h>