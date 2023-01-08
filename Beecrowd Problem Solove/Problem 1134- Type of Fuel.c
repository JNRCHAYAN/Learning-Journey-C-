#include<stdio.h>

main()
{
    int a,b,c,d;


    b=c=d=0;

    for (;;)
    {
        scanf("%d",&a);
        if (a==4)
        {
            break;
        }
        else {
            if (a==1)
                b++;
            else if  (a==2)
                    c++;
            else if (a==3)
                d++;
            continue;

        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",b,c,d);

}
