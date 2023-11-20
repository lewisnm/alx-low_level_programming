#include "lists.h"

/**
 * print_listint - prints all the elements in a list
 * @h: pointer to the list
 * Return: the no. arguments to be printed out
 */

size_t print_listint(const listint_t *h)
{
	size_t node_position = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_position++;
		h = h->next;
	}
	return (node_position);
}
