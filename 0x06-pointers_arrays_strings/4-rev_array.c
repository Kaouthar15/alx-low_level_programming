#include "main.h"
#include <stdio.h>
/**
*reverse_array-reveses the content
*@n: numbers of element to swap
*@a: an array of integers
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
