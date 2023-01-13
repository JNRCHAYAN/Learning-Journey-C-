#include<stdio.h>

int main()
{
    int a,b,i,j,c;
    scanf("%d%d",&a,&b); 
    c=b/a;
    int f=a;
    int d=1;
       
    for (i=1;i<=c;i++)
    {
        printf("%d",d);
        for (j=d+1;j<=f;j++)
        {
        printf(" %d",j);
        }
         printf("\n");
        d=d+a;
        f=f+a;
      
       
    } 

    return 0;
}
