#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5};
int i;
int b[10];
int n=sizeof(a)/sizeof(a[0]);
For(i=0;i<n;i++)
 {
b[i]=a[i];
 }
for(i=0;i<n;i++)
{
Printf(“%d”,b[i]);
}
}
