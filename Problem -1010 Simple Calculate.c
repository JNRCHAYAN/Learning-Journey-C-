#include<stdio.h>

main()
{
    int a,b,c,d;
    float e,f,g;

    scanf("%d%d%f%d%d%f",&a,&b,&e,&c,&d,&f);

    g= ((b*e)+(d*f));

    printf("VALOR A PAGAR: R$ %.2f\n",g);

}
