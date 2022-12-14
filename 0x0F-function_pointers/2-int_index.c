#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: number of element in an array
 * @cmp: pointer to function that compares two values
 * Return: no element match return -1, if size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);

}

