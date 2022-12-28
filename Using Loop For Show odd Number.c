#include<stdio.h>

main()
{
    int i,n;
    printf("Entry your number: ");
    scanf("%d",&n);
    i=1;

   /* for (i=1;i<=n;i=i+2)
    {
        printf("The odd number: %d \n",i);
    }
    return 0; */


   /*  while(i<=n)
    {
        printf("The odd number: %d \n",i);

        i=i+2;
    }*/

    do
    {
       printf("The odd number: %d \n",i);

       i=i+2;
    }
    while(i<=n);

    return 0;
}
