#include<stdio.h>
void sumandavg(int a,int b,int *sum,float *avg){
   *sum=a+b;
    *avg=(float)(*sum)/2;
    printf("The value of sum is %d\n",*sum);
    printf("The value of avg is %f\n",*avg);
}
int main(){
    int i,j,sum;
    float avg;
    i=3;
    j=6;
    sumandavg(i,j,&sum,&avg);
    return 0;
}
//WAP using a function which calculate the sum and average of two numbers.Use the pointers and 
