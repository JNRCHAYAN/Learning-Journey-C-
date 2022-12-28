#include<stdio.h>

main()
{
    int i,a,sum;
    sum=0;

    printf("Entry your number: ");
    scanf("%d",&a);

    for(i=0;i<=a;i++)
    {
       sum=sum+i;
    }
     printf("1+2+3....+%d: %d",a,sum);
}
