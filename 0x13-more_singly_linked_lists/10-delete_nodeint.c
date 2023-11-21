#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a code at a specific index
 * @head: pointer to the list
 * @index: index where the code should be deleted
 *
 * Return: 1 for succes and -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *inx = NULL;
	size_t j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (j < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
		j++;
	}
	inx = temp->next;
	temp->next = inx->next;
	free(inx);

	return (1);
}
