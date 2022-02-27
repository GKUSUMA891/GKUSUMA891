#include<stdio.h>
int main()
{
    char a[]="thunder";
    char b[10];
    int i=0;
    while(1)
    {
        b[i]=a[i];
        if(b[i]=='\0')
        break;
        i++;
    }
    printf("%s",b);
}
