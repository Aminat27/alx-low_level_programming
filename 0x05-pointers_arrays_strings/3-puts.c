#include "main.h"
void _puts(char *str)
{
	int read = 0;
	while (str[read] != '\0')
	{
		read++;
	}
	while (read)
	{

		_putchar(str[++read]);
	}
	_putchar('\n');
}
