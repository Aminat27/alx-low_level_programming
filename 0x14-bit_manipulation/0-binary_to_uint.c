#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string 1 and 0
 * Return: converted number or 0 if b (!= 0,1 or null)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int c;
	unsigned int len;

	len = strlen(b);

	if (!b)
		return (0);

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] & 1)
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
}
