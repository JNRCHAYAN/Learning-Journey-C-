#include<stdio.h>
main()
{
    int a,i,cal;
    scanf("%d",&a);
    cal= 2;

    for (i=2; i<=a; i=i+2)
    {
        cal= i*i;
         printf("%d^2 = %d\n",i,cal);
    }

}
