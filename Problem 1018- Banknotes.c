#include <stdio.h>

int main()
{
    int amt, note;
    scanf("%d",&amt);

    printf("%d\n",amt);
    printf("%d nota(s) de R$ 100,00\n",amt/100);
    note = (amt%100);
    printf("%d nota(s) de R$ 50,00\n",note/50);
    note = (note%50);
    printf("%d nota(s) de R$ 20,00\n",note/20);
    note = (note%20);
    printf("%d nota(s) de R$ 10,00\n",note/10);
    note = (note%10);
    printf("%d nota(s) de R$ 5,00\n",note/5);
    note = (note%5);
    printf("%d nota(s) de R$ 2,00\n",note/2);
    note = (note%2);
    printf("%d nota(s) de R$ 1,00\n",note/1);
    note = (note%1);

    return 0;

}
