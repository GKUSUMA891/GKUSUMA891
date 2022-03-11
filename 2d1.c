#include<stdio.h>
#define ROW 2
#define COL 3

int main()
{

int a[ROW][COL]={10,20,30,40,50,60}; //method-1

int b[ROW][COL]={{100,200,300},{400,500,600}}; //method-2

printf("2D array is a[%d][%d]:\n",ROW,COL);
for(int i=0;i<ROW;i++) // for rows
{
	for(int j=0;j<COL;j++) // for columns
	{
		printf("%d  address of arr[%d][%d] = %p\n",a[i][j],i,j,&a[i][j]); // printing 2D array elements
	}
}

printf("\n2D array is(b[%d][%d]):\n",ROW,COL);
for(int i=0;i<ROW;i++) // for rows
{
	for(int j=0;j<COL;j++) // for columns
	{
		printf("%d  address of arr[%d][%d] = %p\n",b[i][j],i,j,&b[i][j]); // printing 2D array elements
	}
}
int i,j;
for(int i=0;i<ROW;i++)
{
    for(int j=0;j<COL;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n \n");
}
for(int i=0;i<ROW;i++)
{
    for(j=0;j<COL;j++)
    {
        printf("%d ",b[i][j]);
    }
    printf("\n \n");
}
}


