#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * @array: the array
 * @size: size of the elements in an array
 * @cmp: pointer to function of one of the 3 in main
 * Return: zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (k = 0; r < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
