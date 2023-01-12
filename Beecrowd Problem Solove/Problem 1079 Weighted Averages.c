#include<stdio.h>

main()
{
    int a;
    float b,c,d,avg;
    scanf("%d",&a);

    for (int i=1; i<=a; i++)
    {
        scanf("%f%f%f",&b,&c,&d);
        avg=(b*2)+(c*3)+(d*5);
        avg=avg/10;
        printf("%.1f\n",avg);
    }

}
