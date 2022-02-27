#include<stdio.h>
struct student
{
    int age;
    char name[10];
    float sal;
};
int main()
{
    struct student *stu=0;
    stu++;
    printf("size of the struct is: %d",stu);
}
