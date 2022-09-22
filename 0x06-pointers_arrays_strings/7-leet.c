#include "main.h"
char *leet(char *s)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if(i == 'a' && j == 'A')
				_putchar('4');
		}
	}
}
