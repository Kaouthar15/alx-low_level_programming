#include "main.h"
#include <stdio.h>
/**
*more_numbers- print from 1 to 14 ten times
*/
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
