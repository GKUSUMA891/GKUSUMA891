//10.to count frequency of string
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,count=0;
    char str[20],ch;
    printf("enter string:\n ");
    gets(str); //using gets() to take string
    printf("enter char from string:");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
        count++;
    }
    printf("\n frequency of %c: %d",ch,count);
    printf("\n \n no of times occur in string is:%c %d %s",ch,count,str);
    getch();
    return 0;
}
