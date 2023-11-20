#include "lists.h"

/**
 * listint_len - returns the number of nodes in the list
 * @h: the pointer to the list
 *
 * Return:the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		num_node++;
		h = h->next;
	}
	return (num_node);
}
