#include <stdio.h>
void sum(int,int);//declarationint sub(int,int);
void mul(int,int);
void divi(int,int);
void swap(int,int);
void sqr(int,int);
 void swap_temp(int,int);
int main()
{
    int i,a=10,b=5;
   void sum(int,int);
    void sub(int,int);
      void mul(int,int);
       void divi(int,int);
        void swap(int ,int);
         void sqr(int ,int);
          void swap_temp(int,int);
    void(*ptr[7])(int,int)={sum,sub,mul,divi,swap,sqr,swap_temp};//pointer declaration
    //ptr[i](a,b);
    //int n=7;
    //int s=(*ptr[i](a,b));
    for(i=0;i<=7;i++)
    {
        (*ptr[i])(a,b);
    }
}
void sum(int a,int b) 
{
    printf("sum:%d \n",a+b);
}
void sub(int a,int b)
{
    
    printf("sub:%d \n",a-b);
}
void mul(int a,int b)
{
    
    printf("mul:%d\n",a*b);
}
void divi(int a,int b)
{
    
    printf("divi:%d\n",a/b);
}
void swap(int a,int b)
{
   printf("before swap:%d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("after swap:%d %d\n",a,b);
}
void sqr(int a,int b)
{
    printf("sqr:%d\n",a*a*b*b);
}
void swap_temp(int a,int b)
{
    printf("befores wap:%d %d\n",a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
  
    printf("after swap:%d %d\n",a,b);
}
