#include "main.h"
/**
*is_prime_number-if the number is prime or not
*@n:paramétre
*Return:0 or 1
*is_prime_helper-if the num 
*@n:para
*@d:para
*Return:1 or 0 or solution
*/
int is_prime_helper(int n, int d)
{
	if (d == n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, d + 1));
}

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
