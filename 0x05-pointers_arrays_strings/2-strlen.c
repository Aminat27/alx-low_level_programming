#include "main.h"
/**
 * _strlen -  a function that returns the length of a string.
 * @s: input string
 * Return: read.
 */
int _strlen(char *s)
{
	int read = 0;

	while (*s != '\0')
	{
		read++;
		s++;
	}
	return (read);
}
