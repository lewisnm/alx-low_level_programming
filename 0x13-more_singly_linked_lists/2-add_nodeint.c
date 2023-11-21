#include "lists.h"

/**
 * add_nodeint - adds new nodes to the beggining of a linked list
 * @head: the pointer to the first node
 * @n: data for the node
 *
 * Return: the addresse of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t * new_node;

	if (n == NULL)
	{
		return (NULL);
	}

	new_node = (listint_t *) malloc(size of(struct listint_s));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node-> = n;
	
	if (head == NULL)
	{
		free(new_node);
	}
	else 
	{
		new_node->next = head;
		new_node->n = n
	}
	head = new_node;
	return (new_node);
}
