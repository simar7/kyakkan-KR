#include <stdio.h>

int power(int m, int n);

main()
{
	int i;
	for( i = 0; i < 10; ++i )
		printf("%d %d %d\n", i , power(2,i), power(-3,i));
	return 0;
}

int power( int base, int exp )
{
	int i, pow;
	pow = 1;
	
	for( i = 1; i <= exp; ++i )
		pow = pow* base;
	
	return pow;
} 
