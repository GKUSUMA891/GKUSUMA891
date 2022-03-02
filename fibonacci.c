//fib
#include<stdio.h>
int fib(int n)
{
 int a=0,b=1,c; 
 while(a<=n)
 {    
  printf("%d \n",a);
  c=a+b;                // 0+1=1
  a=b;                  //1+1=2
  b=c;                  //2+1=3
 }                   //3+2=5
}

    int  main() 
{
  int n;
  printf("enter element: \n");
  scanf("%d",&n);
  printf("fibonacci series are: %d");
  fib(n);
}
