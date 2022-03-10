#include <stdio.h>
int sum(int,int);//declaration
int main()
{
    int s=0;
    int sum(int a,int b);
    int(*ptr)(int a,int b);//pointer declaration
    ptr=sum;//assigning
    s=(*ptr)(4,5);//calling
    printf("sum is:%d",s);
}
int sum(int a,int b) //defination
{
    
    return a+b;
}

