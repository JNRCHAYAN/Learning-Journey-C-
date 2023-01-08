#include<stdio.h>

main()
{
    int a[5]={1,4,7,100,32};

    int i, max=-32768;

    for (i=0; i<5; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);


}
