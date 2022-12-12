#include "main.h"
#include <string.h>
/**
 * _strncpy - a function that copies the string pointed to by src to dest
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
