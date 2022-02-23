#include<stdio.h>
struct address
{
  char city[20];
  int pin;
  char phone[14];
};
 struct employee
 {
  char name[20];
  struct address add;
 };
 void main()
{
    struct employee emp;
    printf(“enter employee information: \n”);
    scanf("%s %s %d %s",emp.name,emp.add.city,&emp.add.pin,emp.add.phone);
    printf("printing employee imformation: \n");
    printf("name: %s city: %s pincode: %d phone: %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);
}

