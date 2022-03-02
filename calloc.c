#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
      printf(" enter integer elements:");
      scanf("%d",&n);
    int *ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf(" enter the data:");
        scanf("%d ",ptr+i);
        printf("address  is: %d \n",ptr+i);//2000+2*4=2008
    }
    for(i=0;i<n;i++)
    {
     printf("%d \n",*(ptr+i));   
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d \n",*(ptr+i));
    }
    
}
