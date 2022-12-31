#include<stdio.h>

main()
{
    int N,h,m,s;

    N=0;
    scanf("%d",&N);

    h=N/3600;
    N=N%3600;

    m = N/60;
    N=N%60;

    s=N;

    printf("%d:%d:%d",h,m,s);


}
