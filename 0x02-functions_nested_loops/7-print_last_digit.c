
#include "main.h"
/**
 * print_last_digit - check the code
 * @a: An input number
 * Description: function uses _putchar function to print
 *
 * Return: last digit of a
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = -1 * (a % 10);
	}
	else
	{
		a = a % 10;
	}
	_putchar((a % 10) + '0');
	return (a % 10);
}
