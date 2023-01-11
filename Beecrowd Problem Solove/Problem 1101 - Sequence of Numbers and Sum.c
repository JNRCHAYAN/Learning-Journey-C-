#include<stdio.h>

int main()
{
    int a,b,i,j,sum=0;

    for(;;)
    {
        scanf("%d%d",&a,&b);
        if (a<=0 || b<=0)
        {
            break;
        }
        else
        {
            if (a>b)
            {
                for (i=b; i<=a;i++)

                {
                    sum = sum+i;
                    printf("%d ",i);
                }
                printf("Sum=%d\n",sum);
                sum=sum-sum;
            }
            else
            {
                for (i=a; i<=b;i++)

                {
                    sum = sum+i;
                   printf("%d ",i);
                }
                printf("Sum=%d\n",sum);
                sum=sum-sum;

            }continue;

        }
    }
}
