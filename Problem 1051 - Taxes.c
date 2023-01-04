#include<stdio.h>

int main()
{
    double a,b;

    scanf("%lf",&a);

    if (a<=2000.00)
    {
        printf("Isento\n");
    }
    else if (a>=2000.01 && a<=3000.00)
    {
        printf("R$ %.2lf\n",(a-2000)*0.08);
    }
    else if (a>=3000.01 && a<=4500.00)
    {
        printf("R$ %.2lf\n",((a-3000)*0.18 ) +(1000*0.08));
    }

     else if (a>=4500.01)
    {
        printf("R$ %.2lf\n",((a-4500)*0.28 ) +(1000*0.08)+(1500*.18));
    }
}
