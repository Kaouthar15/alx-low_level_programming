#include <stdio.h>
#include "main.h"
/**
  * main -print the number of arguments passed to program
  *@argc: number of arguments
  *@ardv: array of arguments
  *Return: always 0 (success)
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
