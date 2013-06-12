#include <stdio.h>

main()
{

	char c;
	while( ( c = getchar() ) != EOF )
	{
		if( c == ' ' )
		{
			while( ( c = getchar() ) == ' ')
				;
		putchar(' ');
		}
	putchar(c);
	}
			


/*	*very* ugly way of doing it..

	char input[MAX_STRING_LENGTH];
	char c;
	int counter = 0;
	int space_ctr = 0;

	while( (c = getchar()) != EOF && counter <= MAX_STRING_LENGTH )
	{
		if( c == ' ' )
		   ++space_ctr;

		input[counter] = c;
		++counter;	
	}

	printf("Counter val = %d\n", counter);
	printf("Space   val = %d\n", space_ctr);
	char output[counter];

	int i = 0, j;
	for( ; i < counter; ++i )
	{
		for( j = i; j < counter - 1; j++ )
		{
			
			if(input[i] == ' ' && input[i+1] == ' ')
			{
				output[i] = input[i+1];
				++i;	
			} 			
			else
				output[i] = input[i];
		}	
	}
	
	printf("Input = %d\n", input);
	printf("Counter val = %d\n input[counter] = %d\n \
		input[counter-1] = %d\n", counter, input[counter], \
		input[counter-1]);
	
	
	for ( i = 0; i < counter; i++ )
	{
		printf("%c\n", output[i]);
	}
	// printf("Output = %s\n", output);
*/
} 				
