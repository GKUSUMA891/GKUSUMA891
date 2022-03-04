#include<stdio.h>
 int MAX=3;
int main()
{
    int arr[]={10,20,30,40},i;// array initialization
    int *ptr[MAX]; 
         for(i=0;i<MAX;i++)
         {
             ptr[i]=&arr[i];//pointer assign the address of integer
         } 
    printf("accessing 1st element is:%d\n",arr[0]);
    printf("accessing 2nd element is:%d\n",arr[1]);
    printf("accessing 3rd element is:%d\n",arr[2]);
    printf("accessing 4th element is:%d\n",arr[3]);
    printf("accessing 5th element is:%d\n",arr[4]);
    printf("size of the array is:%ld \n",sizeof(arr));
    printf("sizeof pointer :%ld\n",sizeof(ptr));
    printf("sizeof pointer is:%d\n",sizeof(*ptr));
    printf("size of int pointer is:%d\n",sizeof(int*));
    printf("sizeof char pointer is:%c\n",sizeof(char*));
    printf("sizeof float pointer is:%f\n",sizeof(float*));
    printf("sizeof double pointer is:%d\n",sizeof(double*));
    printf("sizeof long in pointer is:%d\n",sizeof(long*));
    printf("sizeof short int pointer is:%d\n",sizeof(short*));
    printf("array of pointer address is:%u\n",&arr);
    printf("array of pointer is:%d\n",*arr);
    printf("value of arr is:%d\n",ptr[i]);
    
}
