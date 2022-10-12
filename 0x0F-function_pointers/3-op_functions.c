#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 * Return: difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mutiply two numbers.
 * @a: first number.
 * @b: second number.
 * Return: product of two numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divdes two numbers.
 * @a: first number.
 * @b: second number.
 * Return: division of two numbers.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulus two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder after division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
