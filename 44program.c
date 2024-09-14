#include<stdio.h>
#include<math.h>
int main(){
    int length,area;
    printf("Enter the value of lenth\n");
    scanf("%d",&length);
    area =length*length;
    printf("The area is %d",area);
    //printf("The value of area is %f",pow(length,2));
    return 0;
}