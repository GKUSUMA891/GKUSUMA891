//3D array
#include <stdio.h>
#define ROW 2
#define COL 3
int main()
{
    int i,j,k;
    int a[2][2][3]={ {{10,20,30},{40,50,60}},
                     {{70,80,90},{100,200,300}} };
   
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<ROW;j++)
        {
            for(k=0;k<COL;k++)
            {
                printf("%d ",a[i][j][k]);
            }
            printf("\n \n");
        }
        printf("\n \n");
    }

    return 0;
}

