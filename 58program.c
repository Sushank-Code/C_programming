#include<stdio.h>
int change(int *a);
    
int main(){
    int p=6;
    printf("The value of p is %d\n",p);
    printf("The ten times  of its current value is %d",change(&p));
    return 0;
}
int change(int *a){
    return *a*10;
}
//wap to change the value of variable to ten times of its current value .
//write a function and pass the value by reference