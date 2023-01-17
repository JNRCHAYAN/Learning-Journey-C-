#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[10],i,k;

    for (i=0;i<10;i++)
    {
        scanf("%d",&k);
        if (k<=0)
        {
            k=1;
            a[i]=k;
        }
        else
        {
            a[i]=k;
        }
    }
    for (int j=0;j<10;j++)
    {
        printf("X[%d] = %d\n",j,a[j]);
    }

    return 0;
}
