#include<stdio.h>

int main()
{

    int a,b;

    scanf("%d",&a);



    for (b=0; b<6;)
    {
         if (a%2!=0){
            printf("%d\n",a);
            b++;
         }
         a++;

    }

}
