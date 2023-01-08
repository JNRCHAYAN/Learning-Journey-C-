#include<stdio.h>

int main()
{
    double a,b,c, perimetro, area;
    scanf("%lf%lf%lf",&a,&b,&c);

    if (a<b+c && b<a+c && c<a+b)
    {
        perimetro = a+b+c;
        printf("Perimetro = %.1lf\n",perimetro);
    }
    else
    {
        area = 0.5*c*(a+b);
        printf("Area = %.1lf\n",area);
    }

    return 0;
}
