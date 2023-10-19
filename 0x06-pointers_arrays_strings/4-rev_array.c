#include "main.h"

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
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = q;
	}
}
