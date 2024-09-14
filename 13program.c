#include <stdio.h>

int main()
{
    int age;
    int vipass=0;
   // vipass=1;
    printf("Enter the number\n");
    scanf("%d", &age);

    if ((age <= 70 && age >= 18) || vipass==1)
    {
        printf("you can drive\n");
    }
        else
        {
            printf("you cannot drive\n");
        }

        return 0;
    }