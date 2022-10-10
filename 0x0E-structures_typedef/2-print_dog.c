#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: struct d
 * if d  = NULL, print nil
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("nil");

		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n ", d->age);

		if (!(d->owner))
			printf("nil");

		else
			printf("Owner: %s\n", d->owner);
	}
}
