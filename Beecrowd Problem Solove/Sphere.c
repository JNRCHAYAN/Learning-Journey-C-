#include<stdio.h>
#include<math.h>


  int main()
    {
         double a,b;
         scanf("%lf", &a);
         b= (4 * 3.14159 * pow(a, 3)) / 3;
         printf("VOLUME = %.3lf\n",b);
         return 0;
      }
