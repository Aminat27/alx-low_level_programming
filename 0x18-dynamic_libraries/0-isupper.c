#include "main.h"
/**
 * _isupper - check the code
 * @c: An input number
 * Description: function uses _putchar function to print
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
