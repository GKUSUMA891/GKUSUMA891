#include<stdio.h>
void main()
{
int a[]={8,11,7,3,9};
int i,j;
int n=sizeof(a)/sizeof(a[0]);
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j+++)
{
if(a[i]<a[j])
a[i]^=a[j]^=a[i]^=a[j];
}
}
}
For(i=o;i<n;i++)
{
Printf(“%d”,a[i]);
}
}
