#include "main.h"
#include <stdlib.h>
/**
* _strcat - append src to dest
*Return: dest
*@dest: paramètre
*@src: paramètre
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
