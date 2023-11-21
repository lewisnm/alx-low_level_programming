#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a singly linked list
 * @head: pointer to the list
 * @n: data for the new node
 *
 * Return: new element or Null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	if (!temp)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
