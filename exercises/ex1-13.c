#include <stdio.h>
#define MAX_WORD_LEN 10

main()
{
	int wordlencounter[MAX_WORD_LEN];
	int counter = 0;
	printf("I dont wanna run\n");

	// TODO: Interesting things happen if you run the loop =10.
	for( counter = 0; counter < MAX_WORD_LEN; counter++ )
		wordlencounter[counter] = 0;
	
	counter = 0;
	char c;
	while( (c = getchar()) != EOF )
	{
scanagain:	if( c == ' ' || c == '\n' || c == '\t' || c == '\b' )
		{
			c = getchar();
			counter = 0;
			goto scanagain;
		
		}
		else
		{
			++counter;
		}
		wordlencounter[counter] += counter;
	}

	for( counter = 0; counter < MAX_WORD_LEN; ++counter )
	{
	    printf("Length Range [%d] = %d\n", \
		    counter, wordlencounter[counter]);
	}
}
	
