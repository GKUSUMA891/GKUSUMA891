#include<stdio.h>
struct gamer
{
    int a;
    char b;
    double c;
}__attribute__((packed));;
int main()
{
    struct gamer var;
    printf("size of the var is %d",sizeof(var));
}
