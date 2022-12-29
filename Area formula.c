#include <stdio.h>
    int main()
    {
        float A,B,C,pi = 3.14159, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO,RETANGULO;

        scanf("%f %f %f ",&A,&B,&C);

        TRIANGULO= 0.5 * A*C;
        CIRCULO = pi*C*C;
        TRAPEZIO= 0.5*(A+B)*C;
        QUADRADO= B*B;
        RETANGULO= A*B;



        printf("TRIANGULO = %d\n",TRIANGULO);
        printf("CIRCULO = %d\n",CIRCULO);
        printf("TRAPEZIO = %d\n",TRAPEZIO);
        printf("QUADRADO = %d\n",QUADRADO);
        printf("RETANGULO = %d\n",RETANGULO);

    }
