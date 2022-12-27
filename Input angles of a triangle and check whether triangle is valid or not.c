#include<stdio.h>

main()
{
    int a,b,c;
    printf("Entry you 3  value of your triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a + b <= c && a + c <= b && b + c <= a)
    {
        printf("This is a triangle");
    }
    else
    {
        printf("\n This is not triangle");
    }
}
