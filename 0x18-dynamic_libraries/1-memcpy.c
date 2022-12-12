#include "main.h"
#include <string.h>
/**
 * _memcpy - a function that copies n bytse from memory area scr
 * to memory area dest
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
