#include<stdio.h>

int main(){
    struct vector{
        int x;
        int y;
    }v1,v2;
    v1.x=34;
    v1.y=54;
    printf("%d %d",v1.x,v1.y);
    v2.x=45;
    v2.y=544;
    printf("%d %d",v2.x,v2.y);
    return 0;
}