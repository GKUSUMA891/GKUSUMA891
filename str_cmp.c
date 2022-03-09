#include <stdio.h>  
#define SIZE 50   //macro
void str_cmp(char const*,char const*); //fun declaration 

int main()  
{  
char str1[SIZE];  
char str2[SIZE];
void (*fp)(char const*,char const*);//fun pointer declaration  

printf("Enter str1 = ");  
scanf("%s",str1); 

printf("Enter str2 = ");  
scanf("%s",str2); 

fp=str_cmp;//assigning
fp(str1,str2);//pointer fun calling 
return 0;  
}  

void str_cmp(char const *a,char const *b)  //fun defination
{  
int flag=0;  
while(*a!='\0' && *b!='\0')  
{  
	if(*a!=*b)  
	{  
      		flag=1;  
	}  
	a++;  
	b++;  
}  
if(flag==0)  
	printf("strings equal\n");
else if(flag==1) 
	printf("strings not equal\n");
}
