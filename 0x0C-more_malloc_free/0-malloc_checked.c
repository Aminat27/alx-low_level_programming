#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: input integer
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *print;

	print = malloc(b);
	if (print == NULL)
	{
		exit(98);
	}
	return (print);
}
