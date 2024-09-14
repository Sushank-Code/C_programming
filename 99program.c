#include<stdio.h>
void many(int i){
    int a=11111;
    for(i=4;i>=1;i--){
        a=a/10;
        printf("\n");
        printf("%d",a);
    }
}
int main(){
    int a=11111;
    printf("%d",a);
    many(a);
    return 0;
}