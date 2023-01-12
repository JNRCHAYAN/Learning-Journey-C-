// Print all the 2D Arrays.

#include<stdio.h>

main()
{
    int a[2][3]={{2,4,6},{3,5,7}};

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
