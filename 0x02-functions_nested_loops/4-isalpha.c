#include "main.h"
/**
*_isalpha - if the input is alpha
*@c :the character to be checked
*Return: 1 if it is alpha, otherwise' 0
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
