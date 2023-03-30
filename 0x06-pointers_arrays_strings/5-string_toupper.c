#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
*string_toupper-string
*Return: str
*@str:paramètre
*/
char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (islower(*p))
		{
			*p = toupper(*p);
		}
		p++;
	}
	return (str);
}
