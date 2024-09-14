#include <stdio.h>
#include <string.h>

int main()
{
    struct employee
    {
        int code;
        float salary;
        char name[20];
    };
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    (*ptr).code = 101;
    printf("%d", e1.code);
    return 0;
}