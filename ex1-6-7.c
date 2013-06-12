#include <stdio.h>

main()
{
	float nc;
	printf("garbage (nc) = %f\n", nc);

	nc = 0;
	while( getchar() != EOF )
	{
		++nc;
		printf("computer (nc) = %f\n", nc);

	}
	
}
