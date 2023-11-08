#include "function_pointers.h"

/**
 *
 * array_iterator - function executes given function as parameter
 * @array: an array of elements
 * @size: the size of array
 * @action: function of point
 * Return: void meaning nothing is returned
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (!array || !action)
    		return;
	for (j = 0; x < size; j++)
	action(array[j]);
}
