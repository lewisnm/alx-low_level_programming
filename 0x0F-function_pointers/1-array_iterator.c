#include "function_pointers.h"

/**
 * int_index - executes a function passed as a parameter
 * @array: points to the array
 * @size : array size
 * @cmp: pointer to the function
 *
 * Return: first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		for (j = 0, j < size, j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}
	return (-1);
}
