#include<stdio.h>

main()
{
    int i ,a[5]={1,4,7,100,32};
    int sum =0;


    for (i=0; i<5; i++)
    {
      sum=sum+ a[i];
    }

  printf("%d\n",sum);

}
