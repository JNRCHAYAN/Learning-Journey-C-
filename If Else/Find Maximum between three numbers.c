#include<stdio.h>

main()
{
    int a,b,c;
    int high;


    printf("Entry your three number ");
    scanf("%d %d %d",&a,&b , &c);

    if (a>b)
    {
        if (a>c)
        {
            high = a;

        }
        else
        {
            high =c;
        }
    }

    else
    {
        if (b>c)
        {
            high = b;
        }
        else {
            high = c;
        }
    }
     printf("The Highest number is %d",high);

}
