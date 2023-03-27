#include "main.h"
#include <string.h>
/**
*rev_string- reverse a string
*@s: paramètre
*/
void rev_string(char *s)
{
	int len = strlen(s);
	char temp;
	int i;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
