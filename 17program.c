#include<stdio.h>

int main(){
    int physics,chemistry,math;
    float total;
    printf("Enter physcis marks\n");
    scanf("%d",&physics);

    printf("Enter the chemistry marks\n");
    scanf("%d",&chemistry);

    printf("Enter the math marks\n");
    scanf("%d",&math);

    total=(physics+chemistry+math/3);

    if((total<40) || physics<33 || chemistry<33 || math<33){
        printf("your total percentage is %f and you are fail\n",total);
    }
    else{
        printf("your total percentage is %f and you are pass\n",total);
    }
     return 0;
}