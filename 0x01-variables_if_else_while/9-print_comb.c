#include <stdio.h>
/**
*main-Entry point
*
*Return: always 0
*/
int main(void)
{
	int c;

	for (c = 48 ; c <= 57 ; c++)
	{
		putchar(c);
		if (c == 57)
		{
			continue;
		}
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
