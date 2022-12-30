#include<stdio.h>
#include<math.h>

main()
{
    double A,B,C, R1,R2;

    scanf("%lf%lf%lf",&A,&B,&C);

    if (A!=0 && B!=0 && C!=0 && sqrt(pow(B,2)-(4*A*C))>=0 )
    {

    R1 = (-B+(sqrt(pow(B,2)-4*A*C)))/(2*A) ;
    R2 = (-B-(sqrt(pow(B,2)-4*A*C)))/(2*A) ;

    printf("R1 = %.5lf\n",R1);
    printf("R2 = %.5lf\n",R2);
    }

    else
    {
        printf("Impossivel calcular");
    }




}
