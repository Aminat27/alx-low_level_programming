#include "main.h"
int _strlen(char *s)
{
	int read = 0;
	while (*s != '\0')
	{
		read++;
		s++;
	}
	return (read);
}
