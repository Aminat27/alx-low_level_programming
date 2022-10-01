#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main- program that prints its name, followed by a new line.
 * @argc: input argument
 * @argv: input string arg
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
