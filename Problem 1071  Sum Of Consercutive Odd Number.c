#include<stdio.h>

int main()
{

    int x,y,a,b;

    scanf("%d%d",&y,&x);
        a=0;


    for (x=x+1; x<y; x++)
    {
         if (x%2!=0)

            {
                a=x+a;


         }

    }  printf("%d\n",a);

}
