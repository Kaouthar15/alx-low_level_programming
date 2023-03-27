#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - return the reverse a string
* @s: paramètre
*/
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
