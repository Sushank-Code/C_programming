#include<stdio.h>
float force(float mass);

int main(){
    float a;
    printf("Enter the value of mass as a in kg\n");
    scanf("%f",&a);
    printf("The value of force is %.2f\n",force(a));
    return 0;
}
float force(float mass){
    float result;
    result= mass*9.8;
    return result;
}
//wap to calculate force of attraction on a body of mass m exerted by earth.