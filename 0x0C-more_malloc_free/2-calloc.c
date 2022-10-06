#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc  - function that allocates memory for an array, using malloc.
 * @size: size of the array.
 * @nmemb: name array of elements
 *
 * Return: pointer of an array of chars
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *calloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc =  malloc(size * nmemb);

	if (calloc == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
	{
		calloc[i] = 0;
	}
	return (calloc);
}
