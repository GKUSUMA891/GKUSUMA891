#include <stdio.h>
main()
{
    int a=10;
    int *ptr1=&a;
    int **ptr2=&ptr1;
    int ***ptr3=&ptr2;
    printf("%d \n",ptr2);/////address of ptr2
    printf("%d \n",*ptr2);//address of ptr1
    printf("%d\n",**ptr2);//10
    printf("%d",***ptr3);
}

