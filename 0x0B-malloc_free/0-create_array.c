#include <stdlib.h>
/**
* *create_array-creates arrays and initialiez it with a specific char
*@size: paramètre
*@c: paramètre
*Return: an array and NULL
*/
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int i;

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
