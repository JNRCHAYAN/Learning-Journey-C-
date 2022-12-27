#include<stdio.h>

main()
{
    char ch;

    printf("Entry your data: ");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z'|| ch>='A' && ch<='Z')

    {
        printf(" \n%c is charter",ch);
    }
    else
    {
        printf("\n %c is not charter",ch);
    }
}
