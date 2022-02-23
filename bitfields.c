//bit fieldes
#include <stdio.h>
struct time
{
    int hours:5;
    int minutes:6;
    int seconds:6;
};
int main()
{
    struct time t={11,30,10};
    printf("%ld \n",sizeof(struct time));
    printf("%d %d %d",t.hours,t.minutes,t.seconds);
}

