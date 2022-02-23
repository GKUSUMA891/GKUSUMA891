//bit fields
#include <stdio.h>
struct x
{
  int a;
  int b;
  int c;
};
void  main()
{
    struct x xx={11,30,10};
    printf("%d \n",sizeof(struct x));
    printf("%d %d %d \n",xx.a,xx.b,xx.c);
}

