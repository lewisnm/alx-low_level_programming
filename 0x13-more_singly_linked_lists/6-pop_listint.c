#include "lists.h"

/**
 * pop_listint - deletes the head node and returns its data function
 * @head: pointer to the list
 *
 * Return: 0 or head the data
 */

int pop_listint(listint_t **head)
{
	int nodeData;
	listint_t *temp;

	if (!*head || !head)
		return (0);
	nodeData = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (nodeData);
}
