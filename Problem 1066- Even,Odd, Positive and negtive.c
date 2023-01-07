#include<stdio.h>

int main()
{
    int a,b,c,d,e,even,odd,positive,negative;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    even=odd=positive=negative=0;

    if (a>0)
    {
        positive = positive +1;
        if (a%2==0)
        {
            even= even+1;
        }
        else
        {
            odd =odd +1;
        }
    }
    else
    {
        if (a==0)
        {
        even= even+1;
        }

        else{
            negative = negative+1;

        if (a%2==0)
        {
            even= even+1;
        }
        else
        {
            odd =odd +1;
        }
        }

    }

        if (b>0)
    {
        positive = positive +1;
        if (b%2==0)
        {
            even= even+1;
        }
        else
        {
            odd =odd +1;
        }
    }
    else
    {
        if (b==0)
        {
        even= even+1;
        }

        else{
            negative = negative+1;

        if (b%2==0)
        {
            even= even+1;
        }
        else
        {
            odd =odd +1;
        }
        }

    }


    if (c>0)
    {
        positive = positive +1;
        if (c%2==0)
        {
            even= even+1;
        }
        else
        {
            odd =odd +1;
        }
    }
    else
    {
        if (c==0)
        {
        even= even+1;
        }

        else{
            negative = negative+1;

        if (c%2==0)
        {
            even= even+1;
        }
        else
        {
            odd =odd +1;
        }
        }

    }

      if (d>0)
    {
        positive = positive +1;
        if (d%2==0)
        {
            even= even+1;
        }
        else
        {
            odd =odd +1;
        }
    }
    else
    {
        if (d=0)
        {
        even= even+1;
        }

        else{
            negative = negative+1;

        if (d%2==0)
        {
            even= even+1;
        }
        else
        {
            odd =odd +1;
        }
        }

    }

     if (e>0)
    {
        positive = positive +1;
        if (e%2==0)
        {
            even= even+1;
        }
        else
        {
            odd =odd +1;
        }
    }
    else
    {
        if (e=0)
        {
        even= even+1;
        }

        else{
            negative = negative+1;

        if (e%2==0)
        {
            even= even+1;
        }
        else
        {
            odd =odd +1;
        }
        }

    }


    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)",even,odd,positive,negative);

}
