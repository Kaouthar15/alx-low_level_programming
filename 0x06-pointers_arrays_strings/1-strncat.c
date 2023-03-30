#include "main.h"
#include <string.h>
/**
* _strncat - with bytes
* Return: dest
* @dest: paramètre
* @src: paramètre
* @n: paramètre
*/
char *_strncat(char *dest, char *src, int n)
{
	char *end = dest + strlen(dest);

	while (*src != '\0' && n > 0)
	{
		*end++ = *src++;
		n--;
	}
	*end = '\0';
	return (dest);
}
