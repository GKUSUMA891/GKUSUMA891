#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p, i, n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    p = (int*)calloc(n, sizeof(int));

    

    for(i = 0; i < n; i++)
    {
        printf("Enter  elements:%d \n", i);
        scanf("%d", p+i);
    }
    printf("\nprinting array of  integers\n\n %d", n);
}
