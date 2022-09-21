#include "main.h"
#include <string.h>
/**
 * _strncat - a function that appends the src string to dest ,
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
