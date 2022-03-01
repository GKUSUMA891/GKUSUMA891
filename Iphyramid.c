#include<stdio.h>
int main()
{
    int i,j,k,n=9;
    int m=1;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<m;j++)
        {
            printf(" ");
        }
        m++;
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
}
