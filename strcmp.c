#include<stdio.h>
int main()
{
    char a[]="thunder";
    char b[]="thunders";
    int i=0;
    while(a[i]!='\0' && b[i]!='\0')
    {
    if(a[i]!=b[i])
    break;
    i++;
    }
    if(a[i]=='\0' && b[i]=='\0')
    printf("both are equal");
    else
    printf("both are not equal");
}
