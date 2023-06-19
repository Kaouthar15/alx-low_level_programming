#include "main.h"
#include <ctype.h>
/**
*_isupper -  check if the character is uppercase
*@c: parameter
*Return:1 if c uppercase,0 otherwise
*/
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
