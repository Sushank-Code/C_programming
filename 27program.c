#include <stdio.h>

int main()
{
  int i = 7;

  printf("The value of i is %d\n", i++);
  printf("The value of i is%d\n", i);
  i *= 10;
  printf("The value is %d\n", i);
  return 0;
}