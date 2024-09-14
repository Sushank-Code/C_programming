#include<stdio.h>
typedef struct complex{
        int real;
        int complex;
    }comp;

    void display(comp c){
        printf("The value of real part is %d\n",c.real);
        printf("The value of imaginary part is %d\n",c.complex);
    }
int main(){
    comp cnum[5];
    for(int i=0;i<5;i++){
        printf("Enter the real values for %d num\n",i+1);
        scanf("%d",&cnum[i].real);

        printf("Enter the complex values for %d num\n",i+1);
        scanf("%d",&cnum[i].complex);
    }
    for(int i=0;i<5;i++){
        display(cnum[i]);
    }
    return 0;
}
//WAP with a strcture representing a complex numbers.