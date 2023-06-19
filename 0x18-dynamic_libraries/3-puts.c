#include "main.h"
#include <stdio.h>
/**
* _puts-prints a string
*@str: parametre
*Return: the result
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
