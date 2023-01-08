#include<stdio.h>

main()
{
    int a,b;


    printf("Entry your two number ");
    scanf("%d %d",&a,&b);

    if (a>=b)
    {
        printf("\nThe maximum number is %d",a);
    }

    else
    {
         printf("\nThe maximum number is %d",b);
    }

}
