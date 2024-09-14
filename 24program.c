#include<stdio.h>

int main(){
    char ch;
    int a,b;
    
    printf("Enter your choice\n");
    scanf("%c",&ch);

    printf("The value of a and b\n");
    scanf("%d%d",&a,&b);

    

    switch(ch){
        case '+':
        printf("The sum of a and b is %d\n",a+b);
        break;
        case '-':
        printf("The difference of a and b is %d\n",a-b);
        break;
        case '*':
        printf("The product of a and b is %d\n",a*b);
        break;
        case '/':
        printf("The division of a and b is %d\n",a/b);
        break;
        default:
        printf("Invalid choice\n");
        break;
        }
    
    return 0;
}