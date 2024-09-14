#include<stdio.h>
void printable(int *multable,int num,int n){
    printf("The multiplication table of %d is \n",num);
    for(int i=0;i<n;i++){
        multable[i]=num*(i+1);
    }
    for(int i=0;i<n;i++){
        printf("%dX%d=%d\n",num,i+1,multable[i]);
    }
    printf("***********************************\n\n");
}
int main(){
    int m,n;
    printf("Enter the value of m and n\n");
    scanf("%d %d",&m,&n);
    int multable[m][n];
    int x,y,z;
    printf("Enter the value of x ,y and z");
    scanf("%d %d %d",&x,&y,&z);
    printable(multable[0],x,10);
    printable(multable[1],y,10);
    printable(multable[2],z,10);

    return 0;
}