#include<stdio.h>
 float average(int a,int b,int c);

int main(){
    int x,y,z;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    printf("Enter the value of y\n");
    scanf("%d",&y);
    printf("Enter the value of z\n");
    scanf("%d",&z);
    printf("The value of average is %f\n",average(x,y,z));
    return 0;
}
 float average(int a,int b,int c){
float result;
result=(a+b+c)/3;
return result;
}
//wap to find the average of three numbers using function.