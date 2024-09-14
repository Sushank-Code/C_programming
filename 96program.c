#include<stdio.h>
#include<string.h>

int main(){
    struct employee{
        int code;
        float salary;
        char name[20];
    }e;
    struct employee facebook[100];
    facebook[0].code=100;
    facebook[0].salary=100;
    strcpy(facebook[0].name,"sushank");

    facebook[1].code=100;
    facebook[2].salary=100;
    strcpy(facebook[3].name,"lamsal");

    facebook[2].code=100;
    facebook[2].salary=100;
    strcpy(facebook[2].name,"gamer");

    printf("done");
    return 0;
}