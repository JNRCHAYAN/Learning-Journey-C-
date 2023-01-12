#include<stdio.h>

main()
{
    int i,a,b=0;

    for (;;)
    {
        scanf("%d",&a);
        if (a==0)
        {
            break;
        }
        else
        {
            for (i=0;i<5;)
            {
                if (a%2==0)
                {
                    b=b+a;
                    i++;
                    a++;
                }
                else
                {
                    a++;
                }
            }
            printf("%d\n",b);

            b=b-b;
        }

        continue;

    }
}
