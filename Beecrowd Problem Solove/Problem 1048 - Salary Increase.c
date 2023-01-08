#include<stdio.h>

int main()
{
   float a,b,c;
    scanf("%f",&a);


    if (a>=0 && a<=400.00)
    {
        b= a+ ((a*15)/100);
        c=((a*15)/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",b,c);

    }
    else if (a>=400.01 && a<=800.00)
    {
        b= a+ ((a*12)/100);
        c=((a*12)/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",b,c);

    }
    else if (a>=800.01 && a<=1200.00)
    {
        b= a+ ((a*10)/100);
        c=((a*10)/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",b,c);

    }
    else if (a>=1200.01 && a<=2000.00)
    {
        b= a+ ((a*7)/100);
        c=((a*7)/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",b,c);

    }
    else if (a>2000.00)
    {
        b= a+ ((a*4)/100);
        c=((a*4)/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",b,c);

    }

}
