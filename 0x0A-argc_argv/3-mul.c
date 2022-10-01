#include <stdio.h>
#include <stdlib.h>
/**
 * main- program that prints its name, followed by a new line.
 * @argc: input argument
 * @argv: input string of arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (1);

}
