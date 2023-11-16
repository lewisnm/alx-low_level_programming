#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: number of arguments
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
