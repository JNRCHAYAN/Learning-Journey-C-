#include<stdio.h>

main()
{
    int i,a,sum;
    sum=0;

    printf("Entry your number: ");
    scanf("%d",&a);

    i=0;

   /*
        for(i=0;i<=a;i++)
    {
       sum=sum+i;
    }
     printf("1+2+3....+%d: %d",a,sum);

     */

    /* while(i<=a)
     {
         sum=sum+i;
         i++;
     }
     printf("1+2+3....+%d: %d",a,sum);  */

     do
     {
            sum=sum+i;
          i++;
     }
      while(i<=a);
      printf("1+2+3....+%d: %d",a,sum);
      return 0;
}
