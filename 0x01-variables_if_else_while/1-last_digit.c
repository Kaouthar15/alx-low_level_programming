#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*main-Entry point
*
*Return:Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (ld > 5)
	{
		printf("%d and is greater than 5", n);
	}
	else if (ld == 0)
	{
		printf("%d and is 0", n);
	}
	else
	{
		printf("%d and is less than 6 and not 0", n);
	}
	return (0);
}
