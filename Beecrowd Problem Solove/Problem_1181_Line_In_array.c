#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int i,j,k;
    double a[12][12],sum=0;
    char x[2];
    scanf("%d%s",&k,&x);

    for (i=0;i<12;i++)
    {
        for (j=0;j<12;j++)
        {
            scanf("%lf",&a[i][j]);

        }

    }
      
      
      for (i=0;i<12;i++)
    {
          sum=sum+a[k][i];

    }
    if (x[0]=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if (x[0]=='M')
    {
        printf("%.1lf\n",sum/12.0);
    }

    return 0;
}
