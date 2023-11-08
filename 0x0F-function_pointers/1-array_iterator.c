#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * @array: the array
 * @size: numbe rof elements
 * @action: pointer to the function that needs to be used
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (!array || !action)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
