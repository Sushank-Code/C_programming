#include<stdio.h>
#include<string.h>

int main(){
    char st1[50];
    char st2[50];
    char c;
    int i=0;

    printf("Enter the value of first string\n");
    scanf("%s",&st1[0]);
    printf("Enter the value of second string character by chracter\n");

    while(c!='\n'){        
        fflush(stdin);
        scanf("%c",&c);
        st2[i]=c;
        i++;
    }
    st2[i-1]='\0';
    printf("The value of st1 is %s\n",st1);
    printf("The value of st2 is %s\n",st2);
    printf("strcmp for these string returns %d",strcmp(st1,st2));
    return 0;
}
//Wap to take string as an input from the user using %c and %s .Confirm that the strings 
// are equal.