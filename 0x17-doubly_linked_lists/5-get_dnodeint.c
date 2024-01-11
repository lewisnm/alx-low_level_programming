#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int p;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	p = 0;

	while (head != NULL)
	{
		if (p == index)
			break;
		head = head->next;
		p++;
	}

	return (head);
}
