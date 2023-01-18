#include<stdio.h>

int main()

{

    int i, j, X, N,k = 0, l;

    scanf("%d", &N);

    for(i = 0;i < N;i++)
    {

        scanf("%d", &X);

        if(X==1 || X==2)printf("prime\n");
          
   if(X == 0){
                 printf("%s\n", "Not Prime");
                 continue;
            }
        else if (X > 2)
        
        {
            for(j = 2;j < X;j++){

            if(X%j == 0){

            k = 2;

            break;

            }

            else k = 1;
            continue;

    }

       if(k == 2)printf("Not Prime\n");

       else if(k == 1)printf("Prime\n");

    }

    }

    return 0;

}