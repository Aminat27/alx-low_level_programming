#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int read = 0, i, n;

	while (str[read] != '\0')
	{
		read++;
	}
	if (read % 2 == 0)
	{
		n = read / 2;
	}
	else
	{
		n = (read - 1) / 2;
	}
	for (i = n; i < read; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

