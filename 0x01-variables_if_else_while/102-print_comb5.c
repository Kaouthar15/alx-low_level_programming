#include <stdio.h>
/**
*main-entry point
*Return: always 0
*/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			for (k = i; k <= 9; k++)
			{
				int start = (k == i) ? +1 : 0;

				for (l = start; l <= 9; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (!(i == 9 && j == 8 && k == 9 && l == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
