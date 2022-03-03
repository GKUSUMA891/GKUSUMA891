//1.declartion and initialization
#include<stdio.h>
void method1(void);
void method2(void);
void method3(void);
void method4(void);

int main()
{
    char arr[5]={'a','b','c','d','e'};
    printf("Base address of the array: %u\n",&arr);
    //using the 4 methods of initialization of array
    method1(); 
    method2();
    method3();
    method4();
    printf("\n\nAddress of all elements %u %u %u %u %u \n",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    int i=0;
    printf("\nValues of the elements of the array : ");
    while(i<5){
        printf("%c ",arr[i]);
        i++;
    }
    return 0;
}

void method1(void){
    char arr[5]={'r','s','t','u','v'};
}
void method2(void){
    char arr[]={'A','B','C','D','E'};
}
void method3(void){
    char arr[5];
    arr[0]='m';
    arr[1]='n';
    arr[2]='o';
    arr[3]='p';
    arr[4]='q';
}
void method4(void){
    char arr[5];
    int i;
    printf("\nInitializing elements to method4 : ");//hello
    for(i=0;i<5;i++)
    {
        scanf("%c",&arr[i]);
    }
}
