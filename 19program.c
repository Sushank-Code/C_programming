//wap to find whether a year entered by the user is a leap year or not.
#include<stdio.h>

int main(){
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);

    if(year%400==0 ){
        printf("%d is the leap year\n",year);
    }
    else if(year%100==0){
        printf("%d is not leap year\n",year);
    }
    else if(year%4==0){
        printf("%d is the leap year",year);
    }
    else{
        printf("%d is not leap year\n",year);
    }
    return 0;
}