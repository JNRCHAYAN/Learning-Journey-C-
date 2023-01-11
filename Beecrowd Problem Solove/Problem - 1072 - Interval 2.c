#include<stdio.h>

main()
{
    int a,i,j,inn,oout;
    scanf("%d",&a);
    inn=oout=0;

    for (i=1; i<=a; i++)
    {
        scanf("%d",&j);
        if (j>=10 && j<=20)
        {
            inn= inn+1;
        }
        else
        {
            oout = oout +1;
        }
    } printf("%d in\n%d out\n",inn,oout);

}
