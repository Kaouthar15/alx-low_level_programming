#include "main.h"
#include <stdio.h>
/**
*factorial-the factorial
*@n: paramètre
*Return: 1 or -1 then solution
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
