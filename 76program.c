#include <stdio.h>
void positive(int a[])
{
    int i, c1=0 , c2=0 , c3=0 ;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > 0)
            c1++;
        else if (a[i] < 0)
            c2++;
        else
            c3++;
    }
    printf("\npositive=%d\nNegative=%d\nzero=%d",c1,c2,c3);
}
int main()
{
    int arr[5];
    printf("Enter 5 numbers\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    positive(arr);
    return 0;
}
//WAp containing the function which counts the numbers of postive integers in an array.