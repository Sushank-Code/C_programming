#include<stdio.h>
 
 struct date{
    int day,month,year;
    }d;
int main(){
    printf("Enter the value of date");
    scanf("%d %d %d",&d.day,&d.month,&d.year);
    printf("%d/%d/%d",d.day,d.month,d.year);
    return 0;
}
//WAP to capable of storing date using structures.