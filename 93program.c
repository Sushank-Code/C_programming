#include<stdio.h>
void check(char str[],char n){
   int f=0;
   for(int i=0;str[i]!='\0';i++){
    if(str[i]==n){
        f=1;
        break;
    }
   }
   if(f==1)
   printf("character is present in string\n");
   else
   printf("character is not present in string\n");
}
int main(){
    char str[10],n;
    printf("Enter a string\n");
    gets(str);

    printf("Enter the character which you want search\n");
    scanf("%c",&n);
    check(str,n);
    return 0;
}
//wap to check whether a given character is present in string or not.