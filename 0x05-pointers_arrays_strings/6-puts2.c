#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts2-other character of a string
* @str: paramètre
*/
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

