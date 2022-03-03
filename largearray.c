//4.second largest element in array
#include<stdio.h>
int second_largest(int b[],int n);
int main()
{
    int a[]={10,20,30,50,60,85,45,97,90,92};
    int x,size=sizeof(a)/sizeof(a[0]);
    x=second_largest(a,size);
    printf("second largest number is:%d",x);
    return 0;
}
int second_largest(int b[],int n)
{
    int i,lar=0,sec=0;
    for(i=0;i<n;i++)
    {
        if(b[i]>lar)
        {
            sec=lar;
            lar=b[i];
        }
        else if(b[i]>sec)
        {
            sec=b[i];
        }
    }
    return sec;
}
