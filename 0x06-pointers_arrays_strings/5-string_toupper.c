#include "main.h"
#include <ctype.h>
/**
 * string_toupper - a function changes all lowercase letters of a string
 * to uppercase
 * @s: input string
 * Return:char pointer to converted string
 */
char *string_toupper(char *s)
{
	char *up = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
	s++;
	}
	return (up);
}
