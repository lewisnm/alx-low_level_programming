#include "lists.h"

/**
 * print_list - prints the elements in our singly list
 * @h: the number of arguments
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		node++;
	}
	return (node);
}
