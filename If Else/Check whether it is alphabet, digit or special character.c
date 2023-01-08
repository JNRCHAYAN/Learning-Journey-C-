#include<stdio.h>

main()
{
    char ch;

    printf("Entry your data: ");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z'|| ch>='A' && ch<='Z')

    {
        printf(" \n%c is alphabet",ch);
    }
    else if (ch>='0' && ch<='9')
    {
        printf("\n %c is a digit",ch);
    }
    else
    {
        printf("\n %c is a special character",ch);
    }
}
