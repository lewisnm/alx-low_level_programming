#include "main.h"

/**
 * swap - whats going on under the hood
 *
 * swap_int - swaps the values of a and b
 *
 * @a: the value to swapped
 * @b: the value to be swapped
 *
 * Return: void
 */

void swap(int *x, int *y);

void swap_int(int *a, int *b)
{

	swap(&a, &b);

}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;

}
