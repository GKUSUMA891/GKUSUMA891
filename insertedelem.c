#include<stdio.h>
int main()
{
    int arr[20]={10,20,30,40,50};
    int i,n=6,loc=3,key=70; 
    for(i=n-1;i>=loc;i--) 
    {  
        arr[i+1]=arr[i]; 
        }  
        arr[loc]=key;
        printf("inserted element is: %d\n",arr[loc]);
    
}

