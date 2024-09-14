#include <stdio.h>

int main()
{
    int i = 1, n;
    printf("Enter the values of n\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("The  natural number is%d\n", i);
    }
    return 0;
}
// to print fisrt n natural number using for loop