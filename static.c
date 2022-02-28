

#include <stdio.h>

int fun()
{
  static int a=30;
  a++;
  return a;
}
int main()
{
   printf("%d\n",fun());
   printf("%d",fun());
}

