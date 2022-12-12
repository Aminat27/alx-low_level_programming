#include "main.h"
/**
 * _isalpha- check the code
 * @c: An input number
 * Description: function uses _putchar function to print
 *
 * Return: 1 if c is lowercase or 0 if it's uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
