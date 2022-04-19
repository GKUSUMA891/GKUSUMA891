#include<stdio.h>  
int main(){  
int number=50;      
int *p;//pointer to int    
int **p2;//pointer to pointer        
p=&number;//stores the address of number variable      
p2=&p;  //p2 stores the address of the pointer  
printf("Address of num variable is %d \n",&number);      
printf("Address of p variable is %d \n",p);      
printf("Value of *p variable is %d \n",*p);      
printf("Address of p2 variable is %d \n",p2);      
printf("Value of **p2 variable is %d \n",*p);      
return 0;  
}  
