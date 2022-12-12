#include "main.h"
/**
 * _islower - check the code
 * @c: An input number
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if c is lowercase or 0 if it's uppercase
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}

		else
		{
			return (0);
		}

}
