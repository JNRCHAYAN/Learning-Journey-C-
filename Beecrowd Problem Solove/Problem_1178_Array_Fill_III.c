#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    double b,a[100];

    scanf("%lf",&b);
    a[0]=b;
    printf("N[0] = %.4lf\n",a[0]);


    for(i=1;i<100;i++)
    {
        b=b/2;
        a[i]=b;
        printf("N[%d] = %.4lf\n",i,a[i]);

    }
    return 0;
}
