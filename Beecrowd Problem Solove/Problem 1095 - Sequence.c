#include<stdio.h>

main()
{
    int i,j;
    i=1;



    for (j=60;j>=0;j=j-5)

    {
        if (j==60)
        {
            printf("I=%d J=%d\n",i,j);
        }
        else{
            i=i+3;
            printf("I=%d J=%d\n",i,j);
        }




        }
    }
