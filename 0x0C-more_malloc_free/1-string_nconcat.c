#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: bytes of s2
 * Return: pointer of an array of chars
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k, out = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
		n = j;

	out = i + n;

	s = malloc(out + 1);

	if (s == NULL)
		return (NULL);

	for (k = 0; k < out; k++)
	{
		if (k < i)
			s[k] = s1[k];

		else
			s[k] = s2[k - i];

	}
	s[k] = '\0';

	return (s);
}
