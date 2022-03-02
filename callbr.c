//call by reference with temp
#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a=19,b=20;
    printf("before swap: %d %d\n ",a,b);
     swap(&a,&b); //passing func
}
  void swap(int*x,int*y)
  {
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("after swapping :%d %d",*x,*y);
}
