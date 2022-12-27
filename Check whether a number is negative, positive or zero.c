#include<stdio.h>

main()
{
    int a;

    printf("Entry your number : ");
    scanf("%d",&a);

    if (a==0)
    {
        printf("\n %d This number is zero",a);
    }
    else if (a>0)
    {
        printf("\n %d This number is positive",a);
    }

    else
    {
        printf("\n %d This number is negative ",a);

    }
}
