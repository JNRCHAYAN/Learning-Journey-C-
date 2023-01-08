#include<stdio.h>

main()
{
    int a,b;
    scanf("%d%d",&a,&b);


    if (a<b)
    {
        for (a=a+1;a<b;a++)
        {
        if (a%5==2 || a%5==3)
        {
            printf("%d\n",a);

        }
        }
    }

    else
    {
        for (b=b+1; b<a;b++)
        {
       if (b%5==2 || b%5==3)
        {
            printf("%d\n",b);

        }


    }


}
}
