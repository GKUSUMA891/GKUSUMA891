#include<stdio.h>
#include<stdlib.h>
enum week {mon,tue,wed=6,thu,fri,sat,sun};
int main()
{
    enum week choice;
    printf("enter week:");
    scanf("%u",&choice);
    switch(choice)
    {
        case 1:
           printf("first day in week:");
           break;
        case 2:
           printf("second day in week:");
           break;
           case 6:
           printf("wednesday");
           break;
        default:
           printf("default is taken:");
    }
    return 0;
}

