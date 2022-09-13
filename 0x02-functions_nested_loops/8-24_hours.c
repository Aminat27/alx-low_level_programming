#include "main.h"
/**
 * jack_bauer - check the code
 * @h,m: An input numbers
 * Description: function uses _putchar function to
 * print every minute of day of Jack B.
 * Return: nothing
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}

