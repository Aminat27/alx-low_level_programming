#include "main.h"
/**
 * _isdigit - check the code
 * @c: An input number
 * Description: function uses _putchar function to print
 * Return: 1 if c is digit or 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

