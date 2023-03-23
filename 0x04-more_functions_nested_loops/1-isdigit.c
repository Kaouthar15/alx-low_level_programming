#include "main.h"
#include <ctype.h>
/**
*_isdigit- check from 0 to 9
*@c: parametre
*Return: 1 if digit,otherwise 0
*/
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
