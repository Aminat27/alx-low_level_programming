#include "main.h"
#include <stdio.h>
/**
 * reverse_array- a function that reverses the array
 * @a: an arrat of integers
 * @n: the number of the elements to swap
*/
void reverse_array(int *a, int n)
{
	int i = 0, rev;

	while (i < n / 2)
	{
		rev = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = rev;
	i++;
	}
}
