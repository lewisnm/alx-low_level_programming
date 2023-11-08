#include "function_pointers.h"

/**
 * int_index - seaarches for an integer
 * @array: points to the array
 * @size : Array size
 * @cmp: pointer to the function
 *
 * Return: first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (j = 0, j < size, j++)
	{
		if (cmp(array[j]) != 0)
			return (j);
	}

	return (-1);
}
