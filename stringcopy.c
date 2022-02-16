#include<stdio.h>
void main()
{
char a[10]=“thunder”;
char b[10];
int i=0;
while(1)
{
b[i]=a[i];
If(b[i]==‘\0’)
break;
i++;
}
Printf(copied string is %s”,b);
}
