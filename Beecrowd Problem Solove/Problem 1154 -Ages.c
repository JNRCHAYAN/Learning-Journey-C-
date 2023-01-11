#include<stdio.h>

main()
{
    int a,i,count=0,b;
    float sum=0;

    for (;;)
    {
        scanf("%d",&a);

        if (a<0)
        {
            break;
        }
        else
        {
            sum= sum +a;
            count =count +1;
            continue;
        }
    }printf("%.2f\n",sum/count);
}
