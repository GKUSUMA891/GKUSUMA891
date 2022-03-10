//2D array
#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
    int i,j;
    int a[3][4]={{10,20,30,40},{50,60,70,80},{90,100,200,300}};//declaration
    printf("access element:%d\n ",a[0][0]);
     printf("access element:%d\n ",a[0][1]);
      printf("access element:%d\n ",a[0][2]);
       printf("access element:%d\n ",a[0][3]);
        printf("access element:%d\n ",a[1][0]);
         printf("access element:%d\n ",a[1][1]);
          printf("access element:%d\n ",a[1][2]);
           printf("access element:%d\n ",a[1][3]);
            printf("access element:%d\n ",a[2][0]);
             printf("access element:%d\n ",a[2][1]);
              printf("access element:%d\n ",a[2][2]);
               printf("access element:%d\n ",a[2][3]);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf(" \n \n");
    }
    printf("size of the array is:%ld",sizeof(a));
    
}

