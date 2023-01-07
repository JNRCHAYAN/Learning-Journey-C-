#include<stdio.h>

main()
{
    int a,b,c;
    scanf("%d",&c);
    b=0;


    for (a=1; a<=10; a++)

    {
       b= a*c;
        printf("%d x %d = %d\n",a,c,b);

    }
}
