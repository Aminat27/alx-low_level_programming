#include "main.h"
/**
 * puts2 - a function that prints other character of a string
 * @str: input string
 * Return: nothing.
 */
void puts2(char *str)
{
	int i, read = 0;

	while (str[read] != '\0')
	{
		read++;
	}
	read -= 1;

	for (i = 0; i <= read; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
