#include "main.h"
#include <stdio.>

/**
 * reverse_array - this reverses an array
 *
 * @a: the array itself
 * @n: elements required
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int k, q;

	for (k = 0; k < n--; k++)
	{
	q = a[k];
	a[k] = a[n];
	a[n] = q;
	}
}
