#include<stdio.h>
main()
{
    int a ;

    printf("Entry your number: ");
    scanf("%d",&a);

    if (a%5==0)
    {
        printf("\n %d number is divisible by 5",a);
    }

    else if (a%5 !=0)
    {
        printf("\n %d number can not divisible with  5 ",a);
    }

    if (a%11==0)
    {

        printf("\n %d number is divisible by 11",a);

    }
    else if (a%11 !=0)
    {
          printf("\n %d number can not divisible with 11 ",a);
    }

}
