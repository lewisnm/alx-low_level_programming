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
	int i = 0, j = --n;
	int temp = 0;

	for (; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}
