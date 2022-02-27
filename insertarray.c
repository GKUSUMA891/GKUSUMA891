#include<stdio.h>
int main()
{
   int arr[10]={10,20,30,40,50};
   int i,loc=2,key=100,n=5;
   for(i=n-1;i>=loc;i--)
   {
       arr[i+1]=arr[i];
   }
   arr[loc]=key;
   printf("%d",arr[loc]);
}
