#include <stdio.h>

main()
{
    char c;
    while( (c = getchar()) != EOF )
    {
        while( c != ' ' && c != '\n' )
        {
            putchar(c);
            c = getchar();
        }

        putchar('\n');
    }
}
