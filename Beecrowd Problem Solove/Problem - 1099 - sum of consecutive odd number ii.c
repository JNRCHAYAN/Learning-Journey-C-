#include<stdio.h>

main()

{
    int a,b,x,i,j,sum;
    scanf("%d",&x);

    for (i=1; i<=x; i++)
    {
        scanf("%d%d",&a,&b);

       if (a>b)
       {
             for (j=b+1;j<a;j++)
        {
            if (j%2!=0)
            {
                sum = sum +j;

            }

        } printf("%d\n",sum);
        sum=sum-sum;

       }
       else if (b>a)
       {
            for (j=a+1;j<b;j++)
        {
            if (j%2!=0)
            {
                sum = sum +j;

            }

        } printf("%d\n",sum);
        sum=sum-sum;
       }
       else if (a==b)
       {
          printf("%d\n",sum);
           sum=sum-sum;
        }




    }
}
