//wap to determine whether a character entered by the user is lowercase or not.
#include<stdio.h>

int main(){
    //97-122 =a-z AscII values
    char c;
    printf("Enter the character\n");
    scanf("%c",&c);

    if(c>=97 && c<=122){
        printf("It is lowercase\n");
    }
    else{
        printf("It is not lowercase\n");
    }
    return 0;
}