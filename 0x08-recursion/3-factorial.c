#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: input integer n
 * Return: -1 if n < -1 and 1 for 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

