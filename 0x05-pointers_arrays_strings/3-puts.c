#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: the character to print
 *
*/
void _puts(char *str)
{
	int read = 0, i;

	while (str[read] != '\0')
	{
		read++;
	}
	for (i = 0; i <= read; i++)
	{

		_putchar(str[i]);
	}
	_putchar('\n');
}
