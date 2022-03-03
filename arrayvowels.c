//2.array of 10 char-vowels
#include<stdio.h>
int main()
{
    char c[10]={'a','b','c','s','h','g','h','g','m','i','d','c'};
    int count,i;
    for(i=0;i<10;i++)
    {
        if(c[i]=='a'|| c[i]=='A' || c[i]=='e' || c[i]=='E' ||c[i]=='i' || c[i]=='I' || c[i]=='o' || c[i]=='O' || c[i]=="u" || c[i]=='U')
        {
            printf("array of vowel element:%c \n ",c[i]);
            printf("array of char address is: %p\n ",&c[i]);
            printf("array of position:%d \n ",i);
        }
    }
}
