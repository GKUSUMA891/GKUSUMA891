#include<stdio.h>
int main()
{
    char a[]="thunder";
    char b[]="soft";
    char c[10];
    int i=0,j=0;
    while(a[i]!='\0')
    {
      c[i]=a[i];
      i++;
    }
    while(1)
    {
        c[i]=b[i];
        if(c[i]=='\0')
        break;
        i++;
        j++;
    }
    printf("%s",c);
}
