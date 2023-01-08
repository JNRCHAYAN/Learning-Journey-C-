#include<stdio.h>

main()
{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    sum= 0;

    if (a<b)
    {
        for (; a<=b;a++)
        {
        if (a%13!=0)
        {
            sum= sum + a;

        }
        }
        printf("%d\n",sum);

    }

    else
    {
         for (; b<=a;b++)
        {
        if (b%13!=0)
        {
            sum= sum + b;


        }
        }
          printf("%d\n",sum);


    }




}
