#include "lists.h"

/**
 * free_listint2 - frees space in memory heap
 * @head: pointer to the list
 *
 * Return: NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
