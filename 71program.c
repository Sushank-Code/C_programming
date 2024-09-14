#include<stdio.h> //       error
void display(int *ptr,int a,int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("The marks of students %d in subejects %d is %d\n",i+1,j+1,ptr[i]);
       //printf("The value of %d element is %d\n",j+1,ptr[j]);
        }
    }
}

int main(){
    int m,n;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&m,&n); 

    int marks[m][n];
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the marks of students %d in subejects %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    
    display(marks,2,5);
    
    return 0;
}
//Create a 2d array by taking input from the user.Write a display function to print the content of this 
//2-d array on the screen.