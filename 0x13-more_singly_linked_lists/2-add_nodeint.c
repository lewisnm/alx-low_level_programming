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
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
