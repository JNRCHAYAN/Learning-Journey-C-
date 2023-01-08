#include<stdio.h>

main()
{
    float a,b,c,d,e,f,avg,sum;
    int total;

    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    total=avg=sum=0;


    if (a>0)
    {
        total=total+1;
        sum = sum +a;

    }
     if (b>0)
    {
        total=total+1;
        sum = sum +b;

    } if (c>0)
    {
        total=total+1;
        sum = sum +c;

    } if (d>0)
    {
        total=total+1;
        sum = sum +d;

    } if (e>0)
    {
        total=total+1;
        sum = sum +e;

    }if (f>0)
    {
        total=total+1;
        sum = sum +f;

    }

    avg= sum/total;
    printf("%d valores positivos\n%.1f\n",total,avg);
}
