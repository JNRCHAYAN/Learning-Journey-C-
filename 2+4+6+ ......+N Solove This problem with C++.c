#include<stdio.h>

main()
{
    int i,a,sum;
    sum=0;

    printf("Entry your number: ");
    scanf("%d",&a);

   i=2;


  /*  for(i=2;i<=a;i=i+2)
    {
       sum=sum+i;
    }
    printf("2+4+6....+%d: %d",a,sum);;

    */

     /* while(i<=a)
     {
         sum=sum+i;
         i=i+2;
     }
     printf("2+4+6....+%d: %d",a,sum); */




   do
     {
        sum=sum+i;
        i=i+2;
     }
      while(i<=a);
      printf("2+4+6....+%d: %d",a,sum);
      return 0;
}
