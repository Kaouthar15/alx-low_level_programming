#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts_half-half of string
* @str:^ paramètre
*/
void puts_half(char *str)
{
	int len = strlen(str);
	int i;
	int si = len / 2;

	if (len % 2 == 1)
	{
		si = (len - 1) / 2;
	}
	for (i = si; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
