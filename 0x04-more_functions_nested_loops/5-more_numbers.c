#include "main.h"
/**
 * more_numbers - check the code
 * @j
 * @i
 *Description* This function prints alphabet in lowercase
 */
void more_numbers(void)
{
	int j = 0;

	while (j <= 9)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		j++;
	}
}
