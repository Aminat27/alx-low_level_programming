#include "main.h"
#include <string.h>
/**
 * _memset- a function that fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to string
 * @b: input character b
 * @n: input integer n
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
