//7.string copy
#include<stdio.h>
void mystrcpy(char d[],char s[]);//declaration
int main()
{
 char d[20] ,s[10];
 printf("enter the string names:\n");
 scanf("%s %s",s,d);
 mystrcpy(d,s);//calling
}
void mystrcpy(char d[],char s[])//defination
{
        int i=0;
        while(s[i]!='\0')
        {
                d[i]=s[i];
                i++;
        }
        d[i]='\0';
                printf("strcpy=%s",d);
}
