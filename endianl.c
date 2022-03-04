
#include <stdio.h>

int main()
{
    int a=0X0012345678;
    char b=(char) a;
    if(b=0x78)
      printf("little endian");
    else 
      printf("big endian");
}

