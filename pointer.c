#include<stdio.h>
int main()
{
    int i,size,a[100],b[100];
    printf("enter array size: ");
    scanf("%d",&size);
    printf("enter array elements ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        b[i]=a[i];
    }
    printf("elements of second array are: \n ");
    for(i=0;i<size;i++)
    {
        printf("\n value inside array b[%d]=%d",i,b[i]);
    } 
    return 0;
}
