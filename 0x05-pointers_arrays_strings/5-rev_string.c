#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s- integer input number
 * Return: nothing
 */
void rev_string(char *s)
{
	int read = 0, a = 0;
	char lens;

	while (s[read] != '\0')
	{
		read++;
	}
	while (a < read--)
	{
		lens = s[a];
		s[a++] = s[read];
		s[read] = lens;
	}
}
