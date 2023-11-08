#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: numbs of elements in an array
 * @cmp: pointer to function of one of the 3 in main
 * Return: zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (r = 0; r < size; r++)
	{
		if (cmp(array[r]))
			return (r);
	}
	return (-1);
}
