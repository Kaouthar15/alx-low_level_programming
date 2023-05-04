#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, F = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			putchar('1');
			F++;
		}
		else if (F)
		{
			putchar('0');
		}
	}
	if (!F)
	{
		putchar('0');
	}
}
