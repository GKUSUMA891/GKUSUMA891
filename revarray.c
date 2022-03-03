//5.reverse an array n print values
#include<stdio.h>
#include<string.h>
void reverse(int b[],int n); //function declaration
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(a)/sizeof(a[0]);
    printf("reverse of an array is: ");
    reverse(a,size); //function calling
    return 0;
}
void reverse(int b[],int n) //function defination
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",b[i]);
    }
}
