#include<stdio.h>

main()
{
    int a;
    printf("Entry your month number");

    scanf("%d",&a);

    if (a%2==0)
    {
        printf(" Total number of day on this month is 31 days");

    }
    else
    {
        printf("Total number of day on this month is 30 days");
    }
}
