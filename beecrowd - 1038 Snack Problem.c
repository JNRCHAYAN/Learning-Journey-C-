#include<stdio.h>

main()
{

    int X,Y;
    float p1,p2,p3,p4,p5,cal;
    //cal=0.00;

    scanf("%d%d",&X,&Y);

    p1=4.00;
    p2=4.50;
    p3=5.00;
    p4=2.00;
    p5=1.50;


    if (X==1)
    {
        cal=p1*Y;
        printf("Total: R$ %.2lf\n",cal);
    }
    else if (X==2)
    {
        cal=p2*Y;
        printf("Total: R$ %.2lf\n",cal);

    }
    else if (X==3)
    {
        cal=p3*Y;
        printf("Total: R$ %.2lf\n",cal);

    }else if (X==4)
    {
        cal=p4*Y;
        printf("Total: R$ %.2lf\n",cal);

    }else if (X==5)
    {
        cal=p5*Y;
        printf("Total: R$ %.2lf\n",cal);

    }




}
