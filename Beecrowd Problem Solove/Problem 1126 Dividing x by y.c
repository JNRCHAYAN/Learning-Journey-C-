#include<stdio.h>

int main()
{
    int i,j;
    float a,b;
    scanf("%d",&j);

    for (i=0;i<j; ++i)
    {
        scanf("%f%f",&a,&b);

        if (b==0)
        {

            printf("divisao impossivel\n");
        }

        else
        {

            printf("%.1f\n",(a/b));
        }

    }
    return 0;
}
