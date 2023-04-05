#include "main.h"
/**
*is_prime_number-if the number is prime or not
*@n:paramétre
*Return:0 or 1
*/
int is_prime_number(int n)
{
	int i;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	for (i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
