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
	int digit = num % 10;

	if (a == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		int num = a[i];
		char comma = (i < n - 1) ? ',' : '\n';
	}
	while (num > 0)
	{
		num /= 10;
		putchar('0' + digit);
	}
	if (i < n - 1)
	{
		putchar(comma);
		putchar(' ');
	}
}
