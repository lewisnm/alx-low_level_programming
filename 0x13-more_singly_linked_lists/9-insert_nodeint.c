#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at the specified position
 * @head: the beginning of the list
 * @idx:where the node should be added
 * @n: the data for the new node
 *
 * Return: address of the new node or Null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nunode, *temp = *head;
	size_t j = 0;

	nunode = malloc(sizeof(listint_t));
	if (!nunode)
		return (NULL);

	nunode->n = n;
	nunode->next = NULL;

	if (!*head && !idx)
	{
		*head = nunode;
		return (nunode);
	}

	else if (!*head && idx)
		return (NULL);

	else if (!idx)
	{
		nunode->next = temp;
		*head = nunode;
		return (nunode);
	}

	while (j < (idx - 1))
	{
		if (!temp || !temp->next)
		{
			free(nunode);
			return (NULL);
		}
		temp = temp->next;
		j++;
	}
	nunode->next = temp->next;
	temp->next = nunode;

	return (nunode);
}
