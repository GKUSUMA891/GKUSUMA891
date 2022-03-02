#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("enter the number of integers:");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory is not available.");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d ",ptr+i);
    }
    for(i=0;i<n;i++)
    printf("%d ",*(ptr+i));//1000+i*4
}
