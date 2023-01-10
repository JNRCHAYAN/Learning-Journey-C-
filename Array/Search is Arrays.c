#include<stdio.h>

int main()
{
        // Two Type search 1. Linear Search 2. Binary Search

        int a[5]={2,8,20,12,16};

        //search here 12

        int key;

        scanf("%d",&key);

        for (int i=0; i<5;i++)
        {
            if (key==a[i])
            {
                printf("Found at %d\n",i);
                break;
            }

        }



}
