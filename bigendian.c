

#include <stdio.h>

int main()
{
    unsigned int i=0000;
    char *c=(char*)&i;
    if(*c)
      printf("little endian");
    else
      printf("big endian");
}

