#include<stdio.h>

main()
{
    int a,b,c,sum=0,count=0,j;
    scanf("%d",&c);

    for (int i=0; i<c; i++)
    {
        scanf("%d%d",&a,&b);
        for (j=1; j<=b;)
        {
            if (a%2!=0)
            {
                sum=sum +a;
                count=count+1;
                j++;
                a++;
            }
            else
            {
                a++;
            }


        }printf("%d\n",sum);
        sum=sum-sum;
    }
}
