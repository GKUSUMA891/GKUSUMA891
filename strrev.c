#include<stdio.h>
#include<string.h>
void main()
{
    char a[]="thundersoft";
    int i=0,j=0;    
    char temp;   
    while(a[i]!='\0')    
    j++;       
    j=j-1; 
    while(i<j)     
    {
        temp=a[i]; 
        a[i]=a[j]; 
        a[j]=temp;  
        i++;    
        j--;    
        printf("%s",a);      
        }
}

