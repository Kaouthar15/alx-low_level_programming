#include "main.h"
#include <stdio.h>

/**
* print_number - prints an integer
*@n: parametre
*Return: nothin
*/
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		putchar('_');
	}
	k /= 10;
	if (k != 0)
	{
		print_number(k);
		putchar((unsigned int)  n % 10 + '0');
	}
}
