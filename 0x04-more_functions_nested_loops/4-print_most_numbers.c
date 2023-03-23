#include "main.h"
#include <stdio.h>
/**
*print_most_numbers-all digits except 2 nd 4
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i ==  2 || i == 4)
		{
			continue;
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
}
