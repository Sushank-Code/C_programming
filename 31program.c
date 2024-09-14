#include<stdio.h>

int main(){
    int i=0;
    while(i<=10){
        printf("the value of i is %d\n",i);
        if(i==4)
            break;
        i++;
    }
    return 0;
}