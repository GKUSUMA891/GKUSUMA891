#include<stdio.h>
#include<stdlib.h>
 enum check{not_found,found};
 enum check str_f(char*str1,int size,char c)
 {
     enum check s;
     s=not_found;
     int i;
     for(i=0;i<size;i++)
     {
         if(str1[i]==c)
         {
             //j=1;
             s=not_found;
             break;
         }
     }
     for(i=0;i<1;i++)
     {
      if(found)
      {
         printf("found\n");
      }
         else
         {
         printf("not found\n");
         }
     }
     
 }
 int main()
 {
    char z,c;
    enum check y;
    int n,size;
    char* str;
    printf("enter the no of character:\n");
    scanf("%d",&n);
    size=n+1;
    str=(char*)malloc(sizeof(char)*size);
    printf("enter the string:\n");
    scanf("%s",str);
    printf("enter the character to the search:\n");
    scanf("%s",&c);
    y=str_f(str,size,c);
    if(y==0)
    {
        printf("found\n");
    }
    else if(y==1)
    {
        printf("not found");
    }
    
 }

