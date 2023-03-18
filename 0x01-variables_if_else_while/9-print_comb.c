#include <stdio.h>
/**
*main-Entry point
*
*Return: always 0
*/
int main(void)
{
	int c;

	for (c = 48 ; c >= 57 ; c++)
	{
		putchar(c);
		putchar(32);
		putchar(44);
	}
	putchar('\n');
	return (0);
}
