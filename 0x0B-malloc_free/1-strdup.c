#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function returns a pointer to a new string which is
 * a duplicate of the string str.
 * @str: input string
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	char *pi;
	unsigned int a, b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		;
	}
	pi = (char *)malloc(sizeof(char) * (a + 1));
	if (pi == NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= a; b++)
	{
		pi[b] = str[b];
	}
	return (pi);
}
