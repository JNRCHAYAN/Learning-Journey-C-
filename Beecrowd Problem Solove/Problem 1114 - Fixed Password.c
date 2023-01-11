#include<stdio.h>

main()
{
    int a,i;

    for (;;)
    {
        scanf("%d",&a);
        if (a==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
            continue;
        }

    }
}
