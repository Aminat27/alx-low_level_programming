#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main- program that prints its name, followed by a new line.
 * @argc: input argument
 * @argv: input string of arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
