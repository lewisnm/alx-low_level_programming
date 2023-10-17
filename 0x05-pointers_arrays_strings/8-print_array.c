#include "main.h"

/**
 * print_array - it prints the number of elements in an array
 *
 * @a: points to the array
 * @n: number of elements of an array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i = 0;

		n--;

		for (; i < n; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[i]);
		return;
	}
	printf("\n");
}
