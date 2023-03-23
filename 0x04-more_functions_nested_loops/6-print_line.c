#include "main.h"
#include <stdio.h>
/**
*print_line- prints a line in terminal
*@n: parametre
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
