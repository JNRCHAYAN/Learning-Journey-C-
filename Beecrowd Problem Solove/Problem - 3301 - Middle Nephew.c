
#include<stdio.h>

int main()
{
    int a[3],mid,location;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);

    if ((a[0]>a[1] && a[0]<a[2]) || (a[0]<a[1] && a[0]>a[2]))
    {
        mid=a[0];
    }
    else if ((a[1]<a[0] && a[1]>a[2]) || (a[1]>a[0] && a[1]<a[2]))
    {
        mid=a[1];
    }
    else

    {
        mid=a[2];
    }


        for (int i=0; i<3;i++)
        {
            if (mid==a[i])
            {
                location = i;
                break;
            }
        }

        if (location==0)
        {
            printf("huguinho\n");
        }
       else if (location==1)
        {
            printf("zezinho\n");
        }
        else if (location==2)
        {
            printf("luisinho\n");
        }


}
