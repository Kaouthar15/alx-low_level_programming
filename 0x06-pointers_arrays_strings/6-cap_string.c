#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
* cap_string-capialize all words
* Return: str
* @str: paramètre
*/
char *cap_string(char *str)
{
	char *p = str;
	int cap_next = 1;

	while (*p)
	{
		if (cap_next && islower(*p))
		{
			*p = toupper(*p);
		}
		cap_next = isspace(*p) || *p == ',' || *p == ';' || *p == '.' || *p == '!' || *p == '?' || *p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}';
		p++;
	}
	return (str);
}
