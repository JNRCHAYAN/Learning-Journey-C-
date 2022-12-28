#include<stdio.h>

main()
{
    int i,n;
    printf("Entry your number: ");
    scanf("%d",&n);

    for (i=1;i<=n;i=i+2)
    {
        printf("The odd number: %d \n",i);
    }
    return 0;
}
