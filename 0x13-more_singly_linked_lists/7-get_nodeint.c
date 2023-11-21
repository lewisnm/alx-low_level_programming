#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: pointer to the list
 * @index: index for the node to return
 *
 * Return: NULL or the pointer to the node we are looking for
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}
	return (temp ? temp : NULL);
}
