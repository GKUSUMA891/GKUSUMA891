//add two nbrs in list returns that index of elements.
#include <stdio.h>

int main()
{
    int arr[]={5,8,2,4,9,6};
    int target=13,temp,i,j,flag=0;

    for(i=0;i<sizeof(arr)/4;i++)
    {
        for(j=i+1;j<sizeof(arr)/4;j++)
        {
            temp=arr[i]+arr[j];

            if(temp==target)
            {
                flag++;
                printf("The two elements present in array are in index %d and %d satisfies the target i.e., %d and %d \n",i,j,arr[i],arr[j]);
            }
        }
    }

    if(flag==0)
    {
        printf("There are no such elements present in array to satisfies the target condition\n");
    }

    return 0;
}

