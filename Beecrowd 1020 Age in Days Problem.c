#include<stdio.h>

main()

{
    int a,y,m,d,z;

    scanf("%d",&a);

    y=a/365;
    z=a%365;

    m=z/30;
    z=z%30;

    d=z;


    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
}
