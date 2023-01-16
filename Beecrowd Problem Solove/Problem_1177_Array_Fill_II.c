#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int a[1000],i,f;

    scanf("%d",&f);

    for (i=0;i<=999; )
    {
        for (int j=0;j<f;j++)
        {
            if (i<1000)
            {
                a[i]=j;
             printf("N[%d] = %d\n",i,a[i]);
            i++;
            continue;
            
            }
            else
            {
                break;
            }
            
        }
      
   
      

    }
    return 0;
}
