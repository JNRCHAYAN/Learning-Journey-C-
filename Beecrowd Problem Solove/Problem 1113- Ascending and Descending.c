#include<stdio.h>

main()
{
    int a,b;



    for (; ;)
    {
         scanf("%d%d",&a,&b);
        if (a==b)
        {
            break;
        }
        else if (a>b)
        {
            printf("Decrescente\n");
             continue;
        }
        else{
               printf("Crescente\n");
            continue;
        }
    }
}
