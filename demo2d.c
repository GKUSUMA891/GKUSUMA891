//2d demo for understanding
#include<stdio.h>
#define ROW 2
#define COL 3

int main()
{

//int a[ROW][COL]={10,20,30,40,50,60}; //method-1

//int b[ROW][COL]={{100,200,300},{400,500,600}}; //method-2

#if 0
printf("%d\n",a[0][0]); // accessing 0th index 0th element
printf("%d\n",a[0][1]); // accessing 0th index 1st element
printf("%d\n",a[0][2]); // accessing 0th index 2nd element
#endif

//int c[ROW][COL];

//int c[][]; // (it will give error) array type has incomplete element type ‘int[]’
//int c[][COL]; // array size is missing
//int c[2][]={1,2,3,4,5,6};//(error)array type has incomplete element type ‘int[]
int c[][2]={1,2,3,4,5,6};
/*printf("Enter %d elements for 2-d array:\n",ROW*COL);
for(int i=0;i<ROW;i++) // for rows
{
	for(int j=0;j<COL;j++) // for columns
	{
		scanf("%d",&c[i][j]); // reading 2-d array elements from user
	}
}
*/
printf("%ld\n",sizeof(c));
printf("\n2-d array is:\n");
for(int i=0;i<2;i++) // for rows
{
	for(int j=0;j<COL;j++) // for columns
	{
		printf("%d  address of arr[%d][%d] = %p\n",c[i][j],i,j,&c[i][j]); // printing 2-d array elements
	}
}
//printf("Base address of array=%p\nAddress of first element=%p\n",a,&a[0]);

return 0;
}
