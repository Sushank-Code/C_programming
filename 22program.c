#include <stdio.h>

int main()
{
    char gr;

    int a;

    printf("enter the case\n");
    scanf("%c", &gr);

    printf("enter the marks\n");
    scanf("%d", &a);

    switch (gr)
    {
    case 'A':
        printf("Your marks(90-100) is %c", gr);
        break;
    case 'B':
        printf("Your marks(80-90) is %c", gr);
        break;
    case 'C':
        printf("your marks(70-80) is %c", gr);
        break;
    case 'D':
        printf("your marks (60-70) is %c", gr);
        break;
    case 'E':
        printf("your marks is (<60) %c", gr);
        break;
    default:
        printf("Invalid grade");
        break;
    }
    return 0;
}