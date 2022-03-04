#include<stdio.h>
struct student   //declaration
{
    int rollno;
    char name[20];
    float marks;
};
struct student s={1234,"kusuma",4.5};//global var- defination
void main()        
{
    struct student *ptr=&s; //pointer stores address
    printf("rollno is %d\n",ptr->rollno); //address
    printf("name is :%s\n",ptr->name);
    printf("marks is :%f\n",ptr->marks);
    printf("rollno is: %d\n",(*ptr).rollno); //value
    printf("name is :%s\n",(*ptr).name);
    printf("marks is :%f\n",(*ptr).marks);
    printf("rollno is:%d\n",s.rollno);
    printf("name is:%s\n",s.name);
    printf("marks is:%f\n",s.marks);
    printf("sizeof the structure is: %d\n",sizeof(s));
    printf("sizeof the address is: %d\n",sizeof(ptr));
    printf("sizeof pointer is:%d \n",sizeof(*ptr));
   // printf("sizeof the array is:%d\n",sizeof(arr));
    //printf("sizeof the array of pointer is:%d\n",sizeof(ptr));
}

