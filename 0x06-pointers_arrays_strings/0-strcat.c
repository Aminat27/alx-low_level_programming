#include "main.h"
#include <string.h>
/**
 * _strcat - a function that appends the src string  to by dest,
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
