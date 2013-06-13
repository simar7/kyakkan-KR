#include <stdio.h>
#define IN 1
#define OUT 0

main()
{
    int c, lines, words, chars, state;

    state = OUT;
    lines = words = chars = 0;
    while( (c = getchar()) != EOF )
    {
        ++chars;
        if( c == '\n' )
            ++lines;
        if( c == ' ' || c == '\t' )
            state = OUT;
        else if ( state == OUT )
        {
            ++words;
            state = IN;
        }
    }
    printf("Words = %d\nChars = %d\nLines = %d\n ", words, chars, lines);
}
