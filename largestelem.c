#include <stdio.h>
int main()
{
    int arr[9]={7,10,34,8,25,31}; 
    int i,large=arr[0];
    for(i=1;i<7;i++)    
    {
        if(arr[i]>large)    
        {           
            large=arr[i];
            }    
        
    }   
    printf(" largest element is %d",large);
    
}

