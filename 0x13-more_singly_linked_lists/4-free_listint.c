#include "lists.h"

/**
 * free_listint - frees space in memory heap
 * @head: pointer to the lists
 *
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
