#include "main.h"
#include <string.h>
/**
 * _strpbrk - a function that searches a string s for any of a set of bytes
 * in the string accept
 * @s: input string
 * @accept: input character
 * Return: a pointer to the byte in s that matches one of the byte in accept
 * or NULL if no such byte is not found
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
