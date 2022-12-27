#include<stdio.h>

main()
{
    char ch;

    printf("Entry your data: ");
    scanf("%c",&ch);

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf(" \n%c is Vowel",ch);
    }
    else
    {
        printf("\n %c is consonant",ch);
    }
}
