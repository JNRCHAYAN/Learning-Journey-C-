#include<stdio.h>

main()
{
    int a,b,c;
    int high,mid,low;

    scanf("%d%d%d",&a,&b,&c);

    if (a>b)
    {
        if (a>c)
        {
            high = a;
            if (c>b)
            {
                mid= c;
                low = b;
            }
            else
            {
                mid=b;
                low=c;
            }

        }
        else
        {
            high =c;
             if (b>a)
            {
                mid= b;
                low = a;
            }
            else
            {
                mid=a;
                low=b;
            }
        }
    }

    else
    {
        if (b>c)
        {
            high = b;
            if (c>a)
            {
                mid= c;
                low = a;
            }
            else
            {
                mid=a;
                low=c;
            }
        }
        else {
            high = c;
            if (b>a)
            {
                mid= b;
                low = a;
            }
            else
            {
                mid=a;
                low=b;
            }
        }
    }
     printf("%d\n%d\n%d\n",low,mid,high);
     printf("\n%d\n%d\n%d\n",a,b,c);

}
