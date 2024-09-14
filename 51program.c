#include<stdio.h>
int natural(int n);

int main(){
    int number;
    printf("Enter the value of n\n");
    scanf("%d",&number);
    printf("The sum of %d natural number is %d",number,natural(number));
    return 0;
}
int natural(int num){
    int result;
   if(num){
       result =(num + natural(num-1));
       return result;
     }
}
//wap to print the sum of n natural number using recursion function.