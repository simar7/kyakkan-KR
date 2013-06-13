#include <stdio.h>
#define MAX_WORD_LEN 10

main()
{
	int wordlencounter[MAX_WORD_LEN];
	int wordfreqcounter[MAX_WORD_LEN];
	int counter = 0;
	printf("I dont wanna run\n");

	// TODO: Interesting things happen if you run the loop till 10.
	for( counter = 0; counter < MAX_WORD_LEN; counter++ )
	{
		wordlencounter[counter] = 0;
		wordfreqcounter[counter] = 0;
	}
	counter = 0;
	int numwords = 0;
	char c;
	while( (c = getchar()) != EOF )
	{
		if( c == ' ' || c == '\b' || c == '\t' || c == '\n' )
		{
			counter = 0;
			++numwords;
		}
		else
		{
			wordlencounter[numwords]++;
			++counter;
		}
	}

	for( counter = 0; counter < 10; counter++ )
	{
		wordfreqcounter[wordlencounter[counter]]++;
	}		

	for( counter = 1; counter < MAX_WORD_LEN; ++counter )
	{
	    printf("Length Range [%d] = %d: %.*s>\n", \
		    counter, wordfreqcounter[counter], \
				wordfreqcounter[counter], "============");
	}

	printf("---------------------\n");

	printf("[1]  [2]  [3]  [4]  [5]  [6]  [7]  [8]  [9]\n");

	for( counter = 1; counter < MAX_WORD_LEN; ++counter )
	{
		for ( 	
}
	
