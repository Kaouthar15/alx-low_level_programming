#include "main.h"
#include <stdio.h>
/**
* _strlen_recursion-the length olf string
*@s: prmètre
*Return: 0
*Retur,: the solution
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
