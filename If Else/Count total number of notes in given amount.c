#include <stdio.h>

int main()
{
    int amt;
    int n1000,n500,n100,n50,n10,n1;


    n1000=n500=n100=n50=n10=n1=0;

    printf("Enter amount: ");
    scanf("%d", &amt);


    if(amt >= 1000)
    {
        n1000 = amt/1000;
        amt -=n1000* 1000 ;

    }

    else if (amt >=500)

    {
        n500= amt/500;
        amt -=n500* 500 ;
    }

    if (amt >=100)

    {
        n100= amt/100;
        amt -=n100* 100;
    }
    else if (amt >=50)

    {
        n50= amt/50;
        amt -=n50* 50;
    }

    if (amt >=100)

    {
        n10= amt/10;
        amt -=n10* 10;
    }
    else if (amt >=1)

    {
        n1= amt/1;
        amt -=n1*1;
    }


    printf("Total number of notes = \n");
    printf("1000 = %d\n", n1000);
    printf("500 = %d\n", n500);
    printf("100 = %d\n", n100);
    printf("50 = %d\n", n50);
    printf("10 = %d\n", n10);
    printf("1 = %d\n", n1);


    return 0;
}
