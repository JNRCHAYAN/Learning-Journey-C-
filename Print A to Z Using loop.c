#include<stdio.h>
main()
{
    char alphabet;

    alphabet='A';

    /*for(alphabet='A' ; alphabet<='Z'; alphabet++)
    {
        printf("%c\n",alphabet);
    }*/

    /*while(alphabet<='Z')
    {
          printf("%c\n",alphabet);
          alphabet++;
    } */

    do
    {
        printf("%c\n",alphabet);
        alphabet++;
    }
    while(alphabet<='Z');
    return 0;



}
