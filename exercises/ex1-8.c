#include <stdio.h>

main()
{
	int blanks, tabs, newlines, other;
	blanks = 0; tabs = 0; newlines = 0; other = 0;
	char c;

	while( (c = getchar()) != EOF )
	{
		printf("You typed: %c\n",c);
		if( c == (char)(' ') )
		   ++blanks;
		else if( c == '\t' )
		   ++tabs;
		else if( c == '\n' )
		   ++newlines;
		else
		   ++other;
	}

	printf("\n blanks = %d\n tabs = %d\n newlines = %d\n \
		other = %d\n ", blanks, tabs, newlines, other);
}
