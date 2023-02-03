#include<stdio.h>
#include<math.h>

#define pi 3.1416
#define max 180


int main(int argc, char const *argv[])
{
    int angle;
    float x,y;
    angle= 0;

    printf("  Angle        Cos(angle)\n\n");
    while (angle <= max)
    {
        x=(pi/max)*angle;
        y=cos(x);

        printf("%6d  %14.4f\n",angle,y);
        angle = angle+ 10;
    }
    
    return 0;
}
