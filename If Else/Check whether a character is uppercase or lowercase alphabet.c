#include<stdio.h>

main()
{
    char ch;

    printf("Entry your character: ");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z')

    {
        printf(" \n%c is lowercase letter",ch);
    }
    else if (ch>='A' && ch<='Z')
    {
        printf("\n %c is Uppercase letter",ch);
    }
}
