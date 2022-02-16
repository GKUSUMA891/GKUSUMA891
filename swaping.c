#include<stdio.h>
void main()
{
int a=23,b=25;
int temp;
temp=a;
a=b;
b=temp;
printf(“swapped values are %d %d”, a, b);
}
