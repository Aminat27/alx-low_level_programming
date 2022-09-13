#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 *Description* This function prints alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
