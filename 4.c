#include <stdio.h>

int int_times_2( int x, int y ) 
{
	int res;
	res = x * y;
	return res;
}

int main() 
{
	int mult;

	mult = int_times_2( 3, 2);
	printf("The multiplication of 3 and 2 is %d.\n", mult);
	return 0;
}

