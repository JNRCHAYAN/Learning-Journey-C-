#include<stdio.h>

int main()
{
    int x,i,a[1000],std;
    scanf("%d",&x);

    for (i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    int j,min=a[0];

    for(j=0;j<x;j++)
    {
      if (min>a[j])
      {
        min=a[j];
        std=j;
      }
        
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,std);
    return 0;
}
